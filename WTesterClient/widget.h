#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "newuser.h"
#include "widget_setting.h"
#include "mainwindow.h"
#include<QTcpSocket>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    widget_setting widgets;
    NewUser widgetn;
    MainWindow mainWindow;

protected:
     void closeEvent(QCloseEvent *event);

private slots:
    void on_pushButton_setting_clicked();

    void on_pushButton_new_clicked();


    void on_pushButton_login_clicked();

    void on_pushButton_reconnect_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
