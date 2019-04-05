/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget_user;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_disconnect;
    QPushButton *pushButton_editu;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *listWidget_questions;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_add;
    QPushButton *pushButton_del;
    QPushButton *pushButton_fresh;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QTextEdit *textEdit_state;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1087, 679);
        Widget->setMaximumSize(QSize(16777215, 16777214));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ui/white"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);

        listWidget_user = new QListWidget(Widget);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ui/admin"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget_user);
        __qlistwidgetitem->setIcon(icon1);
        listWidget_user->setObjectName(QString::fromUtf8("listWidget_user"));
        listWidget_user->setLineWidth(1);
        listWidget_user->setResizeMode(QListView::Fixed);
        listWidget_user->setLayoutMode(QListView::SinglePass);
        listWidget_user->setViewMode(QListView::IconMode);
        listWidget_user->setBatchSize(100);

        verticalLayout_4->addWidget(listWidget_user);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        pushButton_disconnect = new QPushButton(Widget);
        pushButton_disconnect->setObjectName(QString::fromUtf8("pushButton_disconnect"));
        pushButton_disconnect->setFont(font);

        horizontalLayout_4->addWidget(pushButton_disconnect);

        pushButton_editu = new QPushButton(Widget);
        pushButton_editu->setObjectName(QString::fromUtf8("pushButton_editu"));
        pushButton_editu->setFont(font);

        horizontalLayout_4->addWidget(pushButton_editu);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        listWidget_questions = new QListWidget(Widget);
        listWidget_questions->setObjectName(QString::fromUtf8("listWidget_questions"));

        verticalLayout_2->addWidget(listWidget_questions);


        verticalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        pushButton_add = new QPushButton(Widget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setFont(font);

        horizontalLayout_5->addWidget(pushButton_add);

        pushButton_del = new QPushButton(Widget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setFont(font);

        horizontalLayout_5->addWidget(pushButton_del);

        pushButton_fresh = new QPushButton(Widget);
        pushButton_fresh->setObjectName(QString::fromUtf8("pushButton_fresh"));
        pushButton_fresh->setFont(font);

        horizontalLayout_5->addWidget(pushButton_fresh);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_5->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        textEdit_state = new QTextEdit(Widget);
        textEdit_state->setObjectName(QString::fromUtf8("textEdit_state"));
        textEdit_state->setReadOnly(true);

        verticalLayout_3->addWidget(textEdit_state);


        verticalLayout_6->addLayout(verticalLayout_3);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\260\217\347\231\275\351\251\254\346\265\213\350\257\225\346\234\215\345\212\241\345\231\250\347\253\257", nullptr));
        label_2->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\345\234\250\347\272\277\347\212\266\346\200\201:", nullptr));

        const bool __sortingEnabled = listWidget_user->isSortingEnabled();
        listWidget_user->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_user->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Widget", "ROOT", nullptr));
        listWidget_user->setSortingEnabled(__sortingEnabled);

        pushButton_disconnect->setText(QApplication::translate("Widget", "\344\270\213\347\272\277", nullptr));
        pushButton_editu->setText(QApplication::translate("Widget", "\344\277\256\346\224\271", nullptr));
        label_3->setText(QApplication::translate("Widget", "\351\242\230\345\272\223\347\212\266\346\200\201:", nullptr));
        pushButton_add->setText(QApplication::translate("Widget", "\346\267\273\345\212\240", nullptr));
        pushButton_del->setText(QApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        pushButton_fresh->setText(QApplication::translate("Widget", "\345\210\267\346\226\260", nullptr));
        label->setText(QApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\347\212\266\346\200\201:", nullptr));
        textEdit_state->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_state->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
