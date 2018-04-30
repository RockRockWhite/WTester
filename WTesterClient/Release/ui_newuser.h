/********************************************************************************
** Form generated from reading UI file 'newuser.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSER_H
#define UI_NEWUSER_H

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

class Ui_NewUser
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_passwords;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_passwords2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_new;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *NewUser)
    {
        if (NewUser->objectName().isEmpty())
            NewUser->setObjectName(QStringLiteral("NewUser"));
        NewUser->resize(328, 139);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ui/new"), QSize(), QIcon::Normal, QIcon::Off);
        NewUser->setWindowIcon(icon);
        gridLayout = new QGridLayout(NewUser);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(NewUser);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        lineEdit_id = new QLineEdit(NewUser);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_id);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(NewUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_passwords = new QLineEdit(NewUser);
        lineEdit_passwords->setObjectName(QStringLiteral("lineEdit_passwords"));
        lineEdit_passwords->setFont(font);
        lineEdit_passwords->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_passwords);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(NewUser);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        lineEdit_passwords2 = new QLineEdit(NewUser);
        lineEdit_passwords2->setObjectName(QStringLiteral("lineEdit_passwords2"));
        lineEdit_passwords2->setFont(font);
        lineEdit_passwords2->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_passwords2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_new = new QPushButton(NewUser);
        pushButton_new->setObjectName(QStringLiteral("pushButton_new"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Arabic"));
        font1.setPointSize(12);
        pushButton_new->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_new);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_cancel = new QPushButton(NewUser);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_cancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(NewUser);

        QMetaObject::connectSlotsByName(NewUser);
    } // setupUi

    void retranslateUi(QWidget *NewUser)
    {
        NewUser->setWindowTitle(QApplication::translate("NewUser", "\346\263\250\345\206\214\347\224\250\346\210\267", nullptr));
        label->setText(QApplication::translate("NewUser", "\350\264\246\345\217\267:", nullptr));
        label_2->setText(QApplication::translate("NewUser", "\345\257\206\347\240\201:", nullptr));
        label_3->setText(QApplication::translate("NewUser", "\347\241\256\350\256\244\345\257\206\347\240\201:", nullptr));
        pushButton_new->setText(QApplication::translate("NewUser", "\346\263\250\345\206\214", nullptr));
        pushButton_cancel->setText(QApplication::translate("NewUser", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewUser: public Ui_NewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSER_H
