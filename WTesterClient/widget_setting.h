#ifndef WIDGET_SETTING_H
#define WIDGET_SETTING_H
#include <QWidget>

namespace Ui {
class widget_setting;
}

class widget_setting : public QWidget
{
    Q_OBJECT

public:
    explicit widget_setting(QWidget *parent = 0);
    ~widget_setting();


private slots:

    void on_pushButton_2_clicked();
    void on_pushButton_save_clicked();
private:
    Ui::widget_setting *ui;
};

#endif // NEWUSER_H

