#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTcpServer>
#include<QTcpSocket>
#include<QSql>
#include<QSqlDatabase>
#include<QSqlError>
#include "widget_add_question.h"
#include<QSqlError>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:

    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void ReceiveConnection();
    void Receive();


    void on_pushButton_add_clicked();

    void on_pushButton_fresh_clicked();

    void on_pushButton_del_clicked();

    void on_listWidget_questions_doubleClicked(const QModelIndex &index);

private:
    bool newUser(QString,QString);
    bool loginUser(QString,QString);
    bool disconnectUser(QString);
    bool getQuestions();
    void fresh();
    widget_add_question widget_a;
    QTcpServer* tcpServer;
    QTcpSocket* tcpSocket;
    Ui::Widget *ui;
};

#endif // WIDGET_H
