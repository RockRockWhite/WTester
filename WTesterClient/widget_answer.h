#ifndef WIDGET_ANSWER_H
#define WIDGET_ANSWER_H

#include <QWidget>

namespace Ui {
class widget_answer;
}

class widget_answer : public QWidget
{
    Q_OBJECT

public:
    explicit widget_answer(QWidget *parent = 0);
    ~widget_answer();
    void init();

private slots:
    void timing();

    void on_pushButton_ok_clicked();

private:
    Ui::widget_answer *ui;
    void fresh();
    void check();
};

#endif // WIDGET_ANSWER_H
