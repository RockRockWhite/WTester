#ifndef WIDGET_ADD_QUESTION_H
#define WIDGET_ADD_QUESTION_H

#include <QWidget>

namespace Ui {
class widget_add_question;
}

class widget_add_question : public QWidget
{
    Q_OBJECT

public:
    explicit widget_add_question(QWidget *parent = 0);
    ~widget_add_question();
    void fresh(QString);

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_cancel_clicked();

    void on_pushButton_miunus_clicked();

    void on_pushButton_save_clicked();

private:
    Ui::widget_add_question *ui;
};

#endif // WIDGET_ADD_QUESTION_H
