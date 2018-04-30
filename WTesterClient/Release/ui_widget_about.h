/********************************************************************************
** Form generated from reading UI file 'widget_about.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_ABOUT_H
#define UI_WIDGET_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget_about
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_white;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *widget_about)
    {
        if (widget_about->objectName().isEmpty())
            widget_about->setObjectName(QStringLiteral("widget_about"));
        widget_about->resize(368, 262);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ui/white"), QSize(), QIcon::Normal, QIcon::Off);
        widget_about->setWindowIcon(icon);
        gridLayout = new QGridLayout(widget_about);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_white = new QLabel(widget_about);
        label_white->setObjectName(QStringLiteral("label_white"));
        label_white->setPixmap(QPixmap(QString::fromUtf8(":/ui/whitea")));

        horizontalLayout->addWidget(label_white);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(widget_about);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget_about);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget_about);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(9);
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_4 = new QLabel(widget_about);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(8);
        label_4->setFont(font2);

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(widget_about);

        QMetaObject::connectSlotsByName(widget_about);
    } // setupUi

    void retranslateUi(QWidget *widget_about)
    {
        widget_about->setWindowTitle(QApplication::translate("widget_about", "\345\205\263\344\272\216WTester", nullptr));
        label_white->setText(QString());
        label->setText(QApplication::translate("widget_about", "\345\260\217\347\231\275\351\251\254\346\265\213\350\257\225\350\275\257\344\273\266  WTester", nullptr));
        label_2->setText(QApplication::translate("widget_about", "\347\211\210\346\234\254:Release1.0.1 2018-02-21", nullptr));
        label_3->setText(QApplication::translate("widget_about", "Copyright \302\251 2018 - \345\260\217\347\231\275\347\245\236\351\251\254\345\245\275\345\220\203\345\220\227(QQ:1834309151).", nullptr));
        label_4->setText(QApplication::translate("widget_about", "\342\200\273\346\234\254\350\275\257\344\273\266\344\275\277\347\224\250\351\203\250\345\210\206ICON\346\272\220\350\207\252\344\272\222\350\201\224\347\275\221,\346\211\200\346\234\211\346\235\203\345\261\236\344\272\216\345\216\237\344\275\234\350\200\205,\344\270\215\347\224\250\344\272\216\345\225\206\344\270\232\347\224\250\351\200\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget_about: public Ui_widget_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_ABOUT_H
