#include "widget.h"
#include "ui_widget.h"
#include<QHostAddress>
#include<QMessageBox>
#include<QSqlQuery>
#pragma execution_character_set("utf-8")

QSqlDatabase database;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{

    tcpServer=new QTcpServer();
    tcpSocket=new QTcpSocket();
    tcpServer->listen(QHostAddress::Any,8080);
    QObject::connect(tcpServer,SIGNAL(newConnection()),this,SLOT(ReceiveConnection()));

    ui->setupUi(this);
    ui->textEdit_state->insertPlainText("Starting...");
    ui->textEdit_state->insertPlainText("\n");

    database=QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setDatabaseName("WTest");
    if(database.open())
    {
            ui->textEdit_state->insertPlainText("Connected to database.\n");
    }
    else
    {
            ui->textEdit_state->insertPlainText("Failed to connect to database.\n");
            ui->textEdit_state->insertPlainText(database.lastError().text());
    }
    this->fresh();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::ReceiveConnection()
{
    tcpSocket =tcpServer->nextPendingConnection();
    QObject::connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(Receive()));
    ui->textEdit_state->insertPlainText("A new connextion:");
    ui->textEdit_state->insertPlainText(tcpSocket->peerAddress().toString());
    ui->textEdit_state->insertPlainText("\n");

}
void Widget::Receive()
{
    //处理接收的数据
    tcpSocket= qobject_cast<QTcpSocket*>(sender());
    QString d=tcpSocket->readAll();
    ui->textEdit_state->insertPlainText("Received a new data from "+tcpSocket->peerAddress().toString()+"   "+d);
    ui->textEdit_state->insertPlainText("\n");
    QStringList data=d.split("|");

   if(data[0]=="NEW")
    {
        if(this->newUser(data[1],data[2]))
        {                    
        }
        else
        {
        }
    }
    if(data[0]=="LOGIN")
    {
        if(this->loginUser(data[1],data[2]))
        {
        }
        else
        {

        }
    }
    if(data[0]=="DISCONNECT")
    {
        if(this->disconnectUser(data[1]))
        {
            ui->textEdit_state->insertPlainText("A USER("+data[1]+") has been disconnected");
            ui->textEdit_state->insertPlainText("\n");
        }
        else
        {
        }
    }
    if(data[0]=="GETQUESTIONS")
    {
        this->getQuestions();
    }
    if(data[0]=="GETQUESTION")
    {
        QSqlQuery query;
        query.exec("select * from qusetions WHERE name='"+data[1]+"';");
        if(query.next())
        {

            tcpSocket->write("GETQUESTION|GET"+query.value(1).toString().toUtf8()+"|"+query.value(2).toString().toUtf8()+"|END");
        }
        else
        {
            tcpSocket->write("GETQUESTION|ERROR|CANNOTFIND");
        }
    }
    if(data[0]=="GRADE")

    {
        QSqlQuery query;
        query.exec("select GRADE from user WHERE ID='"+data[1]+"';");
        query.next();
        query.exec("UPDATE user SET GRADE='"+query.value(0).toString().toUtf8()+"\n"+data[2]+"' WHERE ID='"+data[1]+"';");
        tcpSocket->write("GRADE|OK");
    }

    if(data[0]=="GETGRADE")
    {
        QSqlQuery query;
        query.exec("select GRADE from user WHERE ID='"+data[1]+"';");
        query.next();
        tcpSocket->write("GETGRADE|"+query.value(0).toString().toUtf8());
    }

}
bool Widget::newUser(QString Id,QString passwords)
{
    QSqlQuery query;
    query.exec("select *from user WHERE ID='"+Id+"';");
    if(query.next())
    {  
        tcpSocket->write("NEW|ERROR|");
        tcpSocket->write("EXISTED");

        ui->textEdit_state->insertPlainText("Failed to create a new user.ERROR:EXISTED");
        ui->textEdit_state->insertPlainText("\n");
        return 0;
    }
    else if(query.exec("insert into user values('"+Id+"','"+passwords+"','');"))
    {
        tcpSocket->write("NEW|OK");
        ui->textEdit_state->insertPlainText("Created a new user successfuly.");
        ui->textEdit_state->insertPlainText("\n");
        return 1;
    }
    else
    {
        tcpSocket->write("NEW|ERROR|");
        tcpSocket->write(query.lastError().text().toUtf8());
        ui->textEdit_state->insertPlainText("Failed to create a new user.ERROR:"+query.lastError().driverText()+"    "+query.lastError().databaseText());
        ui->textEdit_state->insertPlainText("\n");
        return 0;

    }
}
bool Widget::loginUser(QString Id,QString passwords)
{           
    QSqlQuery query;
    query.exec("select *from user WHERE ID='"+Id+"';");
    if(query.next())
     {
        if(query.value(1)==passwords)
        {
            bool isinline=false;
                //判断用户是否已在线
            for(int n=0;n<ui->listWidget_user->count();n++)
            {

                if(ui->listWidget_user->item(n)->text().toUtf8()==Id)
                {
                    isinline=true;
                    break;
                }
            }
            if (isinline==true)
            {
                tcpSocket->write("LOGIN|ERROR|ISINLINE");
                ui->textEdit_state->insertPlainText("Failed to login.ERROR:ISINLINE");
                ui->textEdit_state->insertPlainText("\n");
                return 0;
            }
            else
            {
                tcpSocket->write("LOGIN|OK");
                ui->textEdit_state->insertPlainText("A USER("+Id+") has been loginned");
                ui->textEdit_state->insertPlainText("\n");
                ui->listWidget_user->insertItem(1,Id);
                ui->listWidget_user->item(1)->setIcon(QIcon(":/ui/student"));
                return 1;
            }
        }
        else
        {
            tcpSocket->write("LOGIN|ERROR|PASSWORDSERROR");
            ui->textEdit_state->insertPlainText("Failed to login.ERROR:PASSWORDSERROR");
            ui->textEdit_state->insertPlainText("\n");
            return 0;
        }
     }
    else
    {
        tcpSocket->write("LOGIN|ERROR|CANNOTFIND");
        ui->textEdit_state->insertPlainText("Failed to login.ERROR:CANNOTFIND");
        ui->textEdit_state->insertPlainText("\n");
        return 0;
    }

}

//客户端关闭后对用户进行下线
bool Widget::disconnectUser(QString Id)
{
    if(Id=="EMPTY")
    {
        return 0;
    }
    else
    {
            //判断用户是否已在线
        for(int n=0;n<ui->listWidget_user->count();n++)
        {

            if(ui->listWidget_user->item(n)->text().toUtf8()==Id)
            {
                ui->listWidget_user->takeItem(n);
                return 1;
            }
            else
            {
            }
        }
        return 0;
    }
}

void Widget::on_pushButton_add_clicked()
{
    widget_a.show();
}

void Widget::on_pushButton_fresh_clicked()
{
    this->fresh();
}
void Widget::fresh()
{
    ui->listWidget_questions->clear();
    QSqlQuery query;
    query.exec("select name from qusetions;");
    while(query.next())
    {
        ui->listWidget_questions->addItem(query.value(0).toString());
    }
}

void Widget::on_pushButton_del_clicked()
{
    QSqlQuery query;
    if(query.exec("DELETE from qusetions WHERE name='"+    ui->listWidget_questions->currentItem()->text()+"';"))
    {
        QMessageBox::information(this,"删除成功","试题:"+ ui->listWidget_questions->currentItem()->text()+"已从数据库删除!");
        this->fresh();
    }
    else
    {
        QMessageBox::information(this,"删除失败",query.lastError().text());
        this->fresh();
    }
}

void Widget::on_listWidget_questions_doubleClicked(const QModelIndex &index)
{
            widget_a.fresh(ui->listWidget_questions->currentItem()->text());
            widget_a.show();
}
//客户端获取试题
bool Widget::getQuestions()
{
    QSqlQuery query;
    QString qusetions="|";
     if(query.exec("select name from qusetions;"))
     {
         while(query.next())
         {
             qusetions=qusetions+query.value(0).toString()+"|";
         }
         tcpSocket->write("GETQUESTIONS"+qusetions.toUtf8());
     }
     else
     {
         tcpSocket->write("GETQUESTIONS|ERROR|"+query.lastError().text().toUtf8());
     }
     return 0;
}



