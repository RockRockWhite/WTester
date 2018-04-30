#ifndef WIDGET_ABOUT_H
#define WIDGET_ABOUT_H

#include <QWidget>

namespace Ui {
class widget_about;
}

class widget_about : public QWidget
{
    Q_OBJECT

public:
    explicit widget_about(QWidget *parent = 0);
    ~widget_about();

private:
    Ui::widget_about *ui;
};

#endif // WIDGET_ABOUT_H
