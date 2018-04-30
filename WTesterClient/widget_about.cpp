#include "widget_about.h"
#include "ui_widget_about.h"

widget_about::widget_about(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_about)
{
    ui->setupUi(this);
}

widget_about::~widget_about()
{
    delete ui;
}
