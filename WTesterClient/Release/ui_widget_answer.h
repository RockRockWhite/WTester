/********************************************************************************
** Form generated from reading UI file 'widget_answer.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_ANSWER_H
#define UI_WIDGET_ANSWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget_answer
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_time;
    QTimeEdit *timeEdit;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_ok;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *widget_answer)
    {
        if (widget_answer->objectName().isEmpty())
            widget_answer->setObjectName(QStringLiteral("widget_answer"));
        widget_answer->resize(927, 645);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ui/white"), QSize(), QIcon::Normal, QIcon::Off);
        widget_answer->setWindowIcon(icon);
        gridLayout = new QGridLayout(widget_answer);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_time = new QLabel(widget_answer);
        label_time->setObjectName(QStringLiteral("label_time"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label_time->setFont(font);

        horizontalLayout_6->addWidget(label_time);

        timeEdit = new QTimeEdit(widget_answer);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setEnabled(false);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        timeEdit->setFont(font1);
        timeEdit->setProperty("showGroupSeparator", QVariant(false));
        timeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        timeEdit->setCalendarPopup(false);
        timeEdit->setTime(QTime(0, 30, 0));

        horizontalLayout_6->addWidget(timeEdit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        scrollArea = new QScrollArea(widget_answer);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 903, 553));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_ok = new QPushButton(widget_answer);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        pushButton_ok->setFont(font);

        horizontalLayout->addWidget(pushButton_ok);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(widget_answer);

        QMetaObject::connectSlotsByName(widget_answer);
    } // setupUi

    void retranslateUi(QWidget *widget_answer)
    {
        widget_answer->setWindowTitle(QApplication::translate("widget_answer", "\347\255\224\351\242\230\347\252\227\345\217\243", nullptr));
        label_time->setText(QApplication::translate("widget_answer", "\345\211\251\344\275\231\346\227\266\351\227\264:", nullptr));
        timeEdit->setDisplayFormat(QApplication::translate("widget_answer", "H:mm:ss", nullptr));
        pushButton_ok->setText(QApplication::translate("widget_answer", "\346\217\220\344\272\244\347\255\224\346\241\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget_answer: public Ui_widget_answer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_ANSWER_H
