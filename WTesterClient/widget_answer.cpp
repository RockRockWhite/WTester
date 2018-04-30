#include "widget_answer.h"
#include "ui_widget_answer.h"
#include <QMessageBox>
#include <cmath>
#include <QTimer>
#include <QTextEdit>
#include <QCheckBox>
#include <QTcpSocket>


#pragma execution_character_set("utf-8")
extern QStringList question;
extern QString time;
QString errorNum;
QStringList answer,answer_u,empty,grade;
QLabel* imageLabel;
int m,h,question_left_count=0;
int size_y=5,totalGrade=0,totalGrade_u=0;

QTimer* timer=new QTimer();
widget_answer::widget_answer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_answer)
{
    ui->setupUi(this);
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(timing()));
    imageLabel = new QLabel(this);
    ui->scrollArea->setWidgetResizable(1);
}

widget_answer::~widget_answer()
{
    delete ui;
}

void widget_answer::init()
{

    m=time.toInt()%60;
    h=(time.toInt()-h)/60;
    question_left_count=question.count()-1;

    //设置时间
    this->ui->timeEdit->setTime(QTime(h,m,0));
    //启动倒计时
    timer->start(1000);

    size_y=0;
    totalGrade=0;
    totalGrade_u=0;
    errorNum="";

    //清理链表
    answer.clear();
    grade.clear();
    empty.clear();

    //释放内存
    delete  imageLabel;

    //防止空指针
    imageLabel=0;
    imageLabel = new QLabel(this);


    //重新设置按钮可用
    ui->pushButton_ok->setEnabled(1);

    this->fresh();

}
void widget_answer::timing()
{
    if(ui->timeEdit->time().hour()==0&&ui->timeEdit->time().minute()==0&&ui->timeEdit->time().second()==0)
    {

        QMessageBox::information(this,"","时间结束");


        for(int i=0;i<question_left_count;i++)
        {
            QCheckBox *checkBoxA=QObject::findChild<QCheckBox *>("QCheckBoxA"+QString::number(i));
            QCheckBox *checkBoxB=QObject::findChild<QCheckBox *>("QCheckBoxB"+QString::number(i));
            QCheckBox *checkBoxC=QObject::findChild<QCheckBox *>("QCheckBoxC"+QString::number(i));
            QCheckBox *checkBoxD=QObject::findChild<QCheckBox *>("QCheckBoxD"+QString::number(i));

            bool isEmpty=1;
            QString a="";
            //选择A
            if(checkBoxA->isChecked())
            {
                a=a+"A";
                isEmpty=0;
            }
            //选择B
            if(checkBoxB->isChecked())
            {
                if(isEmpty)
                {
                    a="B";
                }
                else
                {
                    a=a+",B";
                }
                isEmpty=0;
            }
            //选择C
            if(checkBoxC->isChecked())
            {
                if(isEmpty)
                {
                    a="C";
                }
                else
                {
                    a=a+",C";
                }
                isEmpty=0;
            }
            //选择D
            if(checkBoxD->isChecked())
            {
                if(isEmpty)
                {
                    a="D";
                }
                else
                {
                    a=a+",D";
                }
                isEmpty=0;
            }
            //储存答案
            if(isEmpty)
            {
                answer_u<<"EMPTY";
                empty<<QString::number(i+1);
            }
            else
            {
                answer_u<<a;
            }
        }
        if(empty.isEmpty())
        {
            QMessageBox::information(this,"恭喜","没有漏题!");
        }
        else
        {
            QString empty_num;
            for(int n=0;n<empty.count();n++)
            {
                if(n==0)
                {
                    empty_num=empty[n];
                }
                else
                {
                    empty_num=empty_num+"  "+empty[n];
                }
            }
            QMessageBox::information(this,"提示",empty_num+"题还没有作答!");
        }
        ui->pushButton_ok->setEnabled(0);
        this->check();
        timer->stop();
    }
    else
    {
        ui->timeEdit->setTime(ui->timeEdit->time().addSecs(-1));
    }
}

void widget_answer::fresh()
{
    for(int i=0;i<question_left_count;i++)
    {
       size_y+=350;

       //创建题目编辑框
       QTextEdit *textEdit=new QTextEdit();
       textEdit ->setObjectName("QLineEdit"+QString::number(i));
       textEdit->setFont(QFont("Microsoft YaHei", 12, QFont::Normal));
       textEdit->setGeometry(20,5+350*i,620,150);
       textEdit->setParent( imageLabel);
       textEdit->setEnabled(0);

       //读取题目
       int n=rand()%(question_left_count-i);

       QStringList q_data=question[n].split("/");
       question.removeAt(n);
       if(q_data[5]=="0")
       {
           textEdit->setText(QString::number(i+1)+"."+q_data[0]+"(单选)   "+q_data[7]+"分");
       }
       else
       {
           textEdit->setText(QString::number(i+1)+"."+q_data[0]+"(多选)   "+q_data[7]+"分");
       }

       //创建答案选择框
       //A
       QCheckBox *checkBoxA=new QCheckBox("A."+q_data[1]+"                                                                                                                                                  ");
       checkBoxA->setObjectName("QCheckBoxA"+QString::number(i));
       checkBoxA->setFont(QFont("Microsoft YaHei", 12, QFont::Normal));
       checkBoxA->setParent( imageLabel);
       checkBoxA->setGeometry(30,5+350*i+150,620,50);
       //B
       QCheckBox *checkBoxB=new QCheckBox("B."+q_data[2]+"                                                                                                                                                  ");
       checkBoxB->setObjectName("QCheckBoxB"+QString::number(i));
       checkBoxB->setFont(QFont("Microsoft YaHei", 12, QFont::Normal));
       checkBoxB->setParent(imageLabel);
       checkBoxB->setGeometry(30,5+350*i+200,620,50);
       //C
       QCheckBox *checkBoxC=new QCheckBox("C."+q_data[3]+"                                                                                                                                                  ");
       checkBoxC->setObjectName("QCheckBoxC"+QString::number(i));
       checkBoxC->setFont(QFont("Microsoft YaHei", 12, QFont::Normal));
       checkBoxC->setParent( imageLabel);
       checkBoxC->setGeometry(30,5+350*i+250,620,50);
       //D
       QCheckBox *checkBoxD=new QCheckBox("D."+q_data[4]+"                                                                                                                                                  ");
       checkBoxD->setObjectName("QCheckBoxD"+QString::number(i));
       checkBoxD->setFont(QFont("Microsoft YaHei", 12, QFont::Normal));
       checkBoxD->setParent( imageLabel);
       checkBoxD->setGeometry(30,5+350*i+300,620,50);

       //储存答案
       answer<<q_data[6];
       grade<<q_data[7];

    }

    //调整滚动框
    QPixmap pixmap(":/ui/nothing");
    pixmap = pixmap.scaled(620, size_y);
    imageLabel->setPixmap(pixmap);
    ui->scrollArea->setWidget(imageLabel);


}



void widget_answer::on_pushButton_ok_clicked()
{
    QMessageBox msgBox;
    empty.clear();
    if(msgBox.question(this,"提交答案","确定提交您的答案,若提交将不可修改?")==QMessageBox::Yes)
    {
        for(int i=0;i<question_left_count;i++)
        {
            QCheckBox *checkBoxA=QObject::findChild<QCheckBox *>("QCheckBoxA"+QString::number(i));
            QCheckBox *checkBoxB=QObject::findChild<QCheckBox *>("QCheckBoxB"+QString::number(i));
            QCheckBox *checkBoxC=QObject::findChild<QCheckBox *>("QCheckBoxC"+QString::number(i));
            QCheckBox *checkBoxD=QObject::findChild<QCheckBox *>("QCheckBoxD"+QString::number(i));

            bool isEmpty=1;
            QString a="";
            //选择A
            if(checkBoxA->isChecked())
            {
                a=a+"A";
                isEmpty=0;
            }
            //选择B
            if(checkBoxB->isChecked())
            {
                if(isEmpty)
                {
                    a="B";
                }
                else
                {
                    a=a+",B";
                }
                isEmpty=0;
            }
            //选择C
            if(checkBoxC->isChecked())
            {
                if(isEmpty)
                {
                    a="C";
                }
                else
                {
                    a=a+",C";
                }
                isEmpty=0;
            }
            //选择D
            if(checkBoxD->isChecked())
            {
                if(isEmpty)
                {
                    a="D";
                }
                else
                {
                    a=a+",D";
                }
                isEmpty=0;
            }
            //储存答案
            if(isEmpty)
            {
                answer_u<<"EMPTY";
                empty<<QString::number(i+1);
            }
            else
            {
                answer_u<<a;
                QMessageBox::information(this,"",a);
            }
        }
        if(empty.isEmpty())
        {
            QMessageBox::information(this,"恭喜","没有漏题!");
            this->check();
            ui->pushButton_ok->setEnabled(0);
        }
        else
        {
            QString empty_num;
            for(int n=0;n<empty.count();n++)
            {
                if(n==0)
                {
                    empty_num=empty[n];
                }
                else
                {
                    empty_num=empty_num+"  "+empty[n];
                }
            }
            if(msgBox.question(this,"警告",empty_num+"题还没有作答,确认提交?")==QMessageBox::Yes)
            {
                this->check();
                ui->pushButton_ok->setEnabled(0);
            }
            else
            {
            }

        }
    }
}
void widget_answer::check()
{
    for(int i=0;i<question_left_count;i++)
    {
        if(answer_u[i]==answer[i])
        {
            QString g=grade[i];
            totalGrade_u+=g.toFloat();
        }
        else
        {
            errorNum+=" "+QString::number(i+1);
        }
    }
    extern QTcpSocket* tcpSocket;
    extern QString loginedID;
    extern QString qusetionName;
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString date =current_date_time.toString("yyyy.MM.dd hh:mm:ss.zzz ddd");
    tcpSocket->write("GRADE|"+loginedID.toUtf8()+"|"+qusetionName.toUtf8()+" 得分:"+QString::number(totalGrade_u).toUtf8()+" 完成时间:"+date.toUtf8());
    if(tcpSocket->waitForReadyRead())
    {
        QString d=tcpSocket->readAll();
    }
    else
    {
        QMessageBox::information(this,"提交成绩失败","服务器连接超时,请检查您的网络配置.");
    }
    QMessageBox::information(this,"得分","您的得分为:"+QString::number(totalGrade_u)+"\n错误题号:"+errorNum);
}
