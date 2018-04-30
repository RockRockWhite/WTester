#include "widget.h"
#include "ui_widget.h"
#include<QMessageBox>
#include<QHostAddress>
#include<QSettings>
#pragma execution_character_set("utf-8")

QTcpSocket* tcpSocket;
QString loginedID;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    tcpSocket=new QTcpSocket();
    QSettings setting("\config.ini",QSettings::IniFormat);
    QHostAddress address;
    address.setAddress(setting.value("setting/IP").toString());
    tcpSocket->connectToHost(address,setting.value("setting/PORT").toInt());

    if(tcpSocket->waitForConnected())
    {
        ui->label_state->setText("连接服务器成功!");
        ui->pushButton_reconnect->setEnabled(0);
    }
    else
    {
        ui->label_state->setText("连接服务器超时,请重试!");
        ui->pushButton_reconnect->setEnabled(1);
    }

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_setting_clicked()
{
    widgets.show();
}

void Widget::on_pushButton_new_clicked()
{
    widgetn.show();
}

void Widget::on_pushButton_login_clicked()
{
    if(ui->lineEdit_id->text().isEmpty())
    {
        QMessageBox::information(this,"登录失败","请检查你的输入,账号不为空!");
    }
    else if(ui->lineEdit_passwords->text().isEmpty())
    {
        QMessageBox::information(this,"登录失败","请检查你的输入,密码不为空!");
    }
    else
    {
       tcpSocket->write("LOGIN|"+ui->lineEdit_id->text().toUtf8()+"|"+ui->lineEdit_passwords->text().toUtf8());
       if(tcpSocket->waitForReadyRead())
       {
           QString d=tcpSocket->readAll();
           QStringList data=d.split("|");
           if(data[0]=="LOGIN")
           {
               if(data[1]=="OK")
               {
                   QMessageBox::information(this,"登录成功","登录成功!");
                   loginedID=ui->lineEdit_id->text().toUtf8();
                   this->setVisible(0);
                   mainWindow.loginUser(loginedID);
                   mainWindow.fresh();
                   mainWindow.freshGrade();
                   mainWindow.show();


               }
               else if(data[1]=="ERROR")
               {
                   if(data[2]=="CANNOTFIND")
                   {
                       QMessageBox::information(this,"登录失败","该用户不存在!");
                   }
                   if(data[2]=="ISINLINE")
                   {
                       QMessageBox::information(this,"登录失败","该用户已在线!");
                   }
                   if(data[2]=="PASSWORDSERROR")
                   {
                       QMessageBox::information(this,"登录失败","密码错误,请检查您的输入!");
                   }
               }

           }
       }
       else
       {
           QMessageBox::information(this,"登录失败","服务器连接超时,请检查您的网络配置.");
       }
    }
}

void Widget::on_pushButton_reconnect_clicked()
{
    QSettings setting("\config.ini",QSettings::IniFormat);
    QHostAddress address;
    address.setAddress(setting.value("setting/IP").toString());
    tcpSocket->connectToHost(address,setting.value("setting/PORT").toInt());

    if(tcpSocket->waitForConnected())
    {
        ui->label_state->setText("连接服务器成功!");
        ui->pushButton_reconnect->setEnabled(0);
    }
    else
    {
        ui->label_state->setText("连接服务器超时,请重试!");
        ui->pushButton_reconnect->setEnabled(1);
    }
}

void Widget::closeEvent(QCloseEvent *event)

{
}

