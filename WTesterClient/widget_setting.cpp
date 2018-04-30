#include "widget_setting.h"
#include "ui_widget_setting.h"
#include <QSettings>

#include <QMessageBox>
#include <QTextCodec>
#pragma execution_character_set("utf-8")

widget_setting::widget_setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_setting)
{
    ui->setupUi(this);
    QSettings setting("\config.ini",QSettings::IniFormat);
    ui->lineEdit_server_ip->setText(setting.value("setting/IP").toString());
    ui->lineEdit_server_port->setText(setting.value("setting/PORT").toString());
}

widget_setting::~widget_setting()
{
    delete ui;
}

void widget_setting::on_pushButton_2_clicked()
{
    this->close();
}

void widget_setting::on_pushButton_save_clicked()
{
    QSettings setting("\config.ini",QSettings::IniFormat);
    setting.setValue("setting/IP",ui->lineEdit_server_ip->text());
    setting.setValue("setting/PORT",ui->lineEdit_server_port->text());
    QMessageBox::information(this,"提示","您的配置已保存!");

}
