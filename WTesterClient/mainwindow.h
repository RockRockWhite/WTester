#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "widget_about.h"
#include <QMessageBox>
#include <QString>
#include<QTcpSocket>
#include "widget_answer.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

    void loginUser(QString);

    void fresh();

    void freshGrade();

private slots:
    void on_pushButton_about_clicked();

    void on_pushButton_fresh_clicked();

    void on_pushButton_test_clicked();

    void on_pushButton_freshGrade_clicked();

private:
    Ui::MainWindow *ui;

    widget_answer widgetan;

    widget_about widgeta;
};

#endif // MAINWINDOW_H
