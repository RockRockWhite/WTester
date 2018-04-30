#include "newuser.h"
#include "ui_newuser.h"
#include <QMessageBox>
#include <QTcpSocket>

#pragma execution_character_set("utf-8")
extern QTcpSocket* tcpSocket;

NewUser::NewUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewUser)
{
    ui->setupUi(this);
}

NewUser::~NewUser()
{
    delete ui;
}

void NewUser::on_pushButton_new_clicked()
{

    if(ui->lineEdit_passwords->text()==ui->lineEdit_passwords2->text())
    {
        if(ui->lineEdit_id->text()==""||ui->lineEdit_passwords->text()=="")
        {
            QMessageBox::information(this,"错误","账号或密码不为空!");

        }
        else
        {
            tcpSocket->write("NEW|"+ui->lineEdit_id->text().toUtf8()+"|"+ui->lineEdit_passwords->text().toUtf8());
            if(tcpSocket->waitForReadyRead())
            {
                    QString d=tcpSocket->readAll();
                    QStringList data=d.split("|");
                    if(data[0]=="NEW")
                    {
                        if(data[1]=="OK")
                        {
                            QMessageBox::information(this,"注册成功","新建用户成功,请牢记您的用户名和密码.");
                            this->destroy();
                        }
                        if(data[1]=="ERROR"&&data[2]=="EXISTED")
                        {
                            QMessageBox::information(this,"注册失败","注册失败,该用户名已存在.");
                        }
                        else if(data[1]=="ERROR")
                        {
                            QMessageBox::information(this,"注册失败","注册失败,错误信息:"+data[2]);
                        }
                    }

            }
            else
            {
                QMessageBox::information(this,"注册失败","服务器连接超时,请检查您的网络配置.");
            }

        }

    }
    else
    {

        QMessageBox::information(this,"错误","您输入的两次密码不符,请检查重试!");
    }
}

void NewUser::on_pushButton_cancel_clicked()
{
    this->close();

}
