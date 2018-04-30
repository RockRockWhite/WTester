/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

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

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_state;
    QPushButton *pushButton_reconnect;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_new;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_passwords;
    QPushButton *pushButton_setting;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_login;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(315, 141);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ui/white"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_state = new QLabel(Widget);
        label_state->setObjectName(QStringLiteral("label_state"));

        horizontalLayout_4->addWidget(label_state);

        pushButton_reconnect = new QPushButton(Widget);
        pushButton_reconnect->setObjectName(QStringLiteral("pushButton_reconnect"));
        pushButton_reconnect->setEnabled(false);

        horizontalLayout_4->addWidget(pushButton_reconnect);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit_id = new QLineEdit(Widget);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setFont(font);

        horizontalLayout->addWidget(lineEdit_id);

        pushButton_new = new QPushButton(Widget);
        pushButton_new->setObjectName(QStringLiteral("pushButton_new"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ui/new"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_new->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_new);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_passwords = new QLineEdit(Widget);
        lineEdit_passwords->setObjectName(QStringLiteral("lineEdit_passwords"));
        lineEdit_passwords->setFont(font);
        lineEdit_passwords->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_passwords->setEchoMode(QLineEdit::Password);
        lineEdit_passwords->setCursorMoveStyle(Qt::LogicalMoveStyle);

        horizontalLayout_2->addWidget(lineEdit_passwords);

        pushButton_setting = new QPushButton(Widget);
        pushButton_setting->setObjectName(QStringLiteral("pushButton_setting"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ui/setting"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_setting->setIcon(icon2);

        horizontalLayout_2->addWidget(pushButton_setting);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_login = new QPushButton(Widget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setFont(font);

        horizontalLayout_3->addWidget(pushButton_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\260\217\347\231\275\351\251\254\346\265\213\350\257\225", nullptr));
        label_state->setText(QApplication::translate("Widget", "\346\255\243\345\234\250\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250\344\270\255......", nullptr));
        pushButton_reconnect->setText(QApplication::translate("Widget", "\351\207\215\346\226\260\350\277\236\346\216\245", nullptr));
        label->setText(QApplication::translate("Widget", "\350\264\246\345\217\267:", nullptr));
        pushButton_new->setText(QString());
        label_2->setText(QApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        pushButton_setting->setText(QString());
        pushButton_login->setText(QApplication::translate("Widget", "\347\231\273\351\231\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
