#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget_about.h"

#pragma execution_character_set("utf-8")

extern QTcpSocket* tcpSocket;
extern QString loginedID;
QStringList question;
QString time;
QString qusetionName;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    //对用户进行下线
     tcpSocket->write("DISCONNECT|"+loginedID.toUtf8());
    QMessageBox::information(this,"Thanks","感谢使用本软件");
    exit(0);
}
void MainWindow::loginUser(QString Id)
{
    ui->label_userName->setText(Id);

}

void MainWindow::on_pushButton_about_clicked()
{
        widgeta.show();
}
void MainWindow::fresh()
{
    ui->listWidget_qusetion->clear();
    tcpSocket->write("GETQUESTIONS|GET");
    if(tcpSocket->waitForReadyRead())
    {
        QString d=tcpSocket->readAll();
        QStringList data=d.split("|");
        if(data[1]=="ERROR")
        {
            QMessageBox::information(this,"刷新失败",data[2]);
        }
        else
        {
            for(int i=1;i<data.count();i++)
            {
                ui->listWidget_qusetion->addItem(data[i]);
            }
        }

    }
    else
    {
        QMessageBox::information(this,"刷新失败","服务器连接超时,请检查您的网络配置.");
    }
}

void MainWindow::on_pushButton_fresh_clicked()
{
    this->fresh();
}

void MainWindow::on_pushButton_test_clicked()
{
    if(ui->listWidget_qusetion->currentItem()==0)
    {
        QMessageBox::information(this,"获取试题失败","没有选中试题!");
    }
    else
    {
        qusetionName=ui->listWidget_qusetion->currentItem()->text().toUtf8();
        tcpSocket->write("GETQUESTION|"+ui->listWidget_qusetion->currentItem()->text().toUtf8());
        if(tcpSocket->waitForReadyRead())
        {
            QString d=tcpSocket->readAll();
            QStringList data=d.split("|");
            if(data[0]=="GETQUESTION")
            {
                if(data[1]=="ERROR")
                {
                    QMessageBox::information(this,"获取试题失败",data[2]);
                }
                if(data[1]=="GET")
                {
                    question.clear();
                    for(int i=2;;i++)
                    {
                        if(data[i]=="END")
                        {
                            time=data[i-1];
                            break;
                        }
                        question<<data[i];
                    }
                    QMessageBox::information(this,"试题信息","试题名称:"+ui->listWidget_qusetion->currentItem()->text()+"\n题目数量:"+QString::number(question.count()-1)+"\n完卷时间:"+time);
                    widgetan.init();
                    widgetan.show();
                }
            }
        }
        else
        {
            QMessageBox::information(this,"获取试题失败","服务器连接超时,请检查您的网络配置.");
        }
    }
}

void MainWindow::on_pushButton_freshGrade_clicked()
{
    tcpSocket->write("GETGRADE|"+loginedID.toUtf8());
    if(tcpSocket->waitForReadyRead())
    {
        QString d=tcpSocket->readAll();
        QStringList data=d.split("|");
        if(data[0]=="GETGRADE")
        {
            ui->textEdit_grade->setText(data[1]);
        }
    }
    else
    {
        QMessageBox::information(this,"获取成绩失败","服务器连接超时,请检查您的网络配置.");
    }
}

void MainWindow::freshGrade()
{
    this->on_pushButton_freshGrade_clicked();
}
