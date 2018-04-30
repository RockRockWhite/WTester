#include "widget_add_question.h"
#include "ui_widget_add_question.h"
#include <QMessageBox>
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>
#include<QString>
#pragma execution_character_set("utf-8")
extern  QSqlDatabase database;

widget_add_question::widget_add_question(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_add_question)
{
    ui->setupUi(this);

}

widget_add_question::~widget_add_question()
{
    delete ui;
}

void widget_add_question::on_pushButton_add_clicked()
{
    QStringList action;
    action<<"请在此输入题干"<<"选项A"<<"选项B"<<"选项C"<<"选项D"<<"0"<<"A"<<"2";
    QTreeWidgetItem *item=new QTreeWidgetItem(ui->treeWidget_qusetions,action);
    item->setFlags(item->flags()|Qt::ItemIsEditable);
        ui->label_qusetions_count->setText("题目数量"+QString::number(ui->treeWidget_qusetions->topLevelItemCount()));
}

void widget_add_question::on_pushButton_cancel_clicked()
{
    this->close();
}

void widget_add_question::on_pushButton_miunus_clicked()
{

    if(ui->treeWidget_qusetions->currentItem()==0)
    {
        QMessageBox::information(this,"删除失败","未选中题目");
    }
    else
    {
        delete ui->treeWidget_qusetions->currentItem();
        ui->label_qusetions_count->setText("题目数量"+QString::number(ui->treeWidget_qusetions->topLevelItemCount()));
    }
}

void widget_add_question::on_pushButton_save_clicked()
{
    QString questions;
    //计算题目总分
    float totalGrade=0;
    //嵌套循环读取数据
   for(int i=0;i<ui->treeWidget_qusetions->topLevelItemCount();i++)
    {
       if(i==0)
       {
       questions="|";
       }
       else
       {
           questions=questions+"|";
       }
       QString question;
       for(int n=0;n<8;n++)
       {
           if(n==0)
           {
               question=ui->treeWidget_qusetions->topLevelItem(i)->text(n);
           }
            else if(n==7)
            {
               totalGrade+=ui->treeWidget_qusetions->topLevelItem(i)->text(n).toFloat();
               question=question+"/";
               question=question+ui->treeWidget_qusetions->topLevelItem(i)->text(n);
            }
           else
           {
           question=question+"/";
           question=question+ui->treeWidget_qusetions->topLevelItem(i)->text(n);
           }
       }
       questions=questions+question;
    }

    //写入数据库
   QSqlQuery query;
   //判断是否已经存在同名测试
   query.exec("select *from qusetions WHERE name='"+ui->lineEdit_name->text()+"';");
   if(!query.next())
   {
       if(query.exec("insert into qusetions values('"+ui->lineEdit_name->text()+"','"+questions+"','"+ui->lineEdit_time->text()+"');"))
       {
           QMessageBox::information(this,"保存成功","试题名称:"+ui->lineEdit_name->text()+"\n"+"完成时间:"+ui->lineEdit_time->text()+"分钟\n"+"题数:"+QString::number(ui->treeWidget_qusetions->topLevelItemCount())+"\n总分:"+QString::number(totalGrade));
       }
       else
       {
           QMessageBox::information(this,"保存失败",query.lastError().text());
       }
   }
   else
   {
       //询问替换试题
       QMessageBox msgBox;
       if(msgBox.question(this,"保存失败","同名试题已经存在,是否替换试题?")==QMessageBox::Yes)
       {
           if(query.exec("UPDATE qusetions SET data='"+questions+"',time='"+ui->lineEdit_time->text()+"' WHERE name='"+ui->lineEdit_name->text()+"';"))
           {

               QMessageBox::information(this,"替换成功","试题名称:"+ui->lineEdit_name->text()+"\n"+"完成时间:"+ui->lineEdit_time->text()+"分钟\n"+"题数:"+QString::number(ui->treeWidget_qusetions->topLevelItemCount())+"\n总分:"+QString::number(totalGrade));
           }
           else
           {
               QMessageBox::information(this,"替换失败",query.lastError().text());
           }
       }
       else
       {
       }
   }
}

void widget_add_question::fresh(QString name)
{
    ui->lineEdit_name->setText(name);
    ui->treeWidget_qusetions->clear();
    //读取题库数据
    QSqlQuery query;
    query.exec("select *from qusetions WHERE name='"+name+"';");
    if(query.next())
    {
        ui->lineEdit_time->setText(query.value(2).toString());
        QStringList qusetions=query.value(1).toString().split('|');
        for(int i=1;i<qusetions.count();i++)
        {
            QString s=qusetions[i];
            QStringList qusetion=s.split('/');
            QStringList label;
            for(int n=0;n<8;n++)
            {
                    label<<qusetion[n];
            }
            QTreeWidgetItem *item=new QTreeWidgetItem(ui->treeWidget_qusetions,label);
            item->setFlags(item->flags()|Qt::ItemIsEditable);
        }
    }
    ui->label_qusetions_count->setText("题目数量"+QString::number(ui->treeWidget_qusetions->topLevelItemCount()));

}

