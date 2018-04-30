/********************************************************************************
** Form generated from reading UI file 'widget_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_SETTING_H
#define UI_WIDGET_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget_setting
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_server_ip;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_server_port;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_save;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *widget_setting)
    {
        if (widget_setting->objectName().isEmpty())
            widget_setting->setObjectName(QStringLiteral("widget_setting"));
        widget_setting->setEnabled(true);
        widget_setting->resize(221, 105);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ui/setting"), QSize(), QIcon::Normal, QIcon::Off);
        widget_setting->setWindowIcon(icon);
        gridLayout = new QGridLayout(widget_setting);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(widget_setting);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        lineEdit_server_ip = new QLineEdit(widget_setting);
        lineEdit_server_ip->setObjectName(QStringLiteral("lineEdit_server_ip"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(10);
        lineEdit_server_ip->setFont(font1);

        horizontalLayout_3->addWidget(lineEdit_server_ip);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget_setting);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_server_port = new QLineEdit(widget_setting);
        lineEdit_server_port->setObjectName(QStringLiteral("lineEdit_server_port"));
        lineEdit_server_port->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit_server_port);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_save = new QPushButton(widget_setting);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setFont(font);

        horizontalLayout->addWidget(pushButton_save);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(widget_setting);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(widget_setting);

        QMetaObject::connectSlotsByName(widget_setting);
    } // setupUi

    void retranslateUi(QWidget *widget_setting)
    {
        widget_setting->setWindowTitle(QApplication::translate("widget_setting", "\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("widget_setting", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200:", nullptr));
        lineEdit_server_ip->setText(QApplication::translate("widget_setting", "192.168.1.1", nullptr));
        label_2->setText(QApplication::translate("widget_setting", "\347\253\257\345\217\243:", nullptr));
        lineEdit_server_port->setText(QApplication::translate("widget_setting", "8080", nullptr));
        pushButton_save->setText(QApplication::translate("widget_setting", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QApplication::translate("widget_setting", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget_setting: public Ui_widget_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_SETTING_H
