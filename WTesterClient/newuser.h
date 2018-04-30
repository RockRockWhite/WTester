#ifndef NEWUSER_H
#define NEWUSER_H

#include <QWidget>

namespace Ui {
class NewUser;
}

class NewUser : public QWidget
{
    Q_OBJECT

public:
    explicit NewUser(QWidget *parent = 0);
    ~NewUser();
private slots:
    void on_pushButton_new_clicked();
    void on_pushButton_cancel_clicked();

private:
    Ui::NewUser *ui;
};

#endif // NEWUSER_H
