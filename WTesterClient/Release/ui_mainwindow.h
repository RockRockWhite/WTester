/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_student;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_userName;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *pushButton_freshGrade;
    QSpacerItem *horizontalSpacer_4;
    QTextEdit *textEdit_grade;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QListWidget *listWidget_qusetion;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_test;
    QPushButton *pushButton_fresh;
    QPushButton *pushButton_about;
    QSpacerItem *horizontalSpacer_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(782, 473);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ui/white"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_student = new QLabel(widget);
        label_student->setObjectName(QStringLiteral("label_student"));
        label_student->setPixmap(QPixmap(QString::fromUtf8(":/ui/student")));

        horizontalLayout_2->addWidget(label_student);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_userName = new QLabel(widget);
        label_userName->setObjectName(QStringLiteral("label_userName"));
        label_userName->setFont(font);

        horizontalLayout->addWidget(label_userName);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        pushButton_freshGrade = new QPushButton(widget);
        pushButton_freshGrade->setObjectName(QStringLiteral("pushButton_freshGrade"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        pushButton_freshGrade->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_freshGrade);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        textEdit_grade = new QTextEdit(widget);
        textEdit_grade->setObjectName(QStringLiteral("textEdit_grade"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        textEdit_grade->setFont(font2);

        gridLayout->addWidget(textEdit_grade, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);


        horizontalLayout_7->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_6->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        listWidget_qusetion = new QListWidget(widget_2);
        listWidget_qusetion->setObjectName(QStringLiteral("listWidget_qusetion"));
        listWidget_qusetion->setFont(font2);

        verticalLayout->addWidget(listWidget_qusetion);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_test = new QPushButton(widget_2);
        pushButton_test->setObjectName(QStringLiteral("pushButton_test"));
        pushButton_test->setFont(font1);

        horizontalLayout_5->addWidget(pushButton_test);

        pushButton_fresh = new QPushButton(widget_2);
        pushButton_fresh->setObjectName(QStringLiteral("pushButton_fresh"));
        pushButton_fresh->setFont(font1);

        horizontalLayout_5->addWidget(pushButton_fresh);

        pushButton_about = new QPushButton(widget_2);
        pushButton_about->setObjectName(QStringLiteral("pushButton_about"));
        pushButton_about->setFont(font1);

        horizontalLayout_5->addWidget(pushButton_about);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        horizontalLayout_7->addWidget(widget_2);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\260\217\347\231\275\351\251\254\346\265\213\350\257\225(Debug)", nullptr));
        label_student->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_userName->setText(QApplication::translate("MainWindow", "1252\347\216\213\346\265\251\347\204\266", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\203\205\345\206\265:", nullptr));
        pushButton_freshGrade->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        textEdit_grade->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">2017-2018\345\215\212\346\234\237\346\265\213\350\257\225  21\345\210\206 \345\256\214\346\210\220\346\227\266\351\227\264:2018/02/04</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">2017-2018\345\215\212\346\234\237\346\265\213\350\257\225  21\345\210\206 \345\256\214\346\210\220\346\227\266\351\227\264:2018/02/04</span></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">2017-2018\345\215\212\346\234\237\346\265\213\350\257\225  21\345\210\206 \345\256\214\346\210\220\346\227\266\351\227\264:2018/02/04</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">2017-2018\345\215\212\346\234\237\346\265\213\350\257\225  21\345\210\206 \345\256\214\346\210\220\346\227\266\351\227\264:2018/02/04</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">2017-2018\345\215\212\346\234\237\346\265\213\350\257\225  21\345\210\206 \345\256\214\346\210\220\346\227\266\351\227\264:2018/02/04</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span sty"
                        "le=\" font-family:'SimSun';\">2017-2018\345\215\212\346\234\237\346\265\213\350\257\225  21\345\210\206 \345\256\214\346\210\220\346\227\266\351\227\264:2018/02/04</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">2017-2018\345\215\212\346\234\237\346\265\213\350\257\225  21\345\210\206 \345\256\214\346\210\220\346\227\266\351\227\264:2018/02/04</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\220\210\346\240\274\347\216\207:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "31%", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\351\242\230\345\272\223:", nullptr));
        pushButton_test->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\265\213\350\257\225", nullptr));
        pushButton_fresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        pushButton_about->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
