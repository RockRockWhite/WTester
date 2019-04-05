/********************************************************************************
** Form generated from reading UI file 'widget_add_question.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_ADD_QUESTION_H
#define UI_WIDGET_ADD_QUESTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget_add_question
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_time;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton_add;
    QPushButton *pushButton_miunus;
    QLabel *label_qusetions_count;
    QSpacerItem *horizontalSpacer_2;
    QTreeWidget *treeWidget_qusetions;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_save;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *widget_add_question)
    {
        if (widget_add_question->objectName().isEmpty())
            widget_add_question->setObjectName(QString::fromUtf8("widget_add_question"));
        widget_add_question->resize(956, 547);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ui/white"), QSize(), QIcon::Normal, QIcon::Off);
        widget_add_question->setWindowIcon(icon);
        gridLayout = new QGridLayout(widget_add_question);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(widget_add_question);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout_4->addWidget(label);

        lineEdit_name = new QLineEdit(widget_add_question);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_name);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget_add_question);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        lineEdit_time = new QLineEdit(widget_add_question);
        lineEdit_time->setObjectName(QString::fromUtf8("lineEdit_time"));
        lineEdit_time->setFont(font);
        lineEdit_time->setCursorPosition(2);

        horizontalLayout_3->addWidget(lineEdit_time);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget_add_question);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        pushButton_add = new QPushButton(widget_add_question);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(14);
        pushButton_add->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_add);

        pushButton_miunus = new QPushButton(widget_add_question);
        pushButton_miunus->setObjectName(QString::fromUtf8("pushButton_miunus"));
        pushButton_miunus->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_miunus);

        label_qusetions_count = new QLabel(widget_add_question);
        label_qusetions_count->setObjectName(QString::fromUtf8("label_qusetions_count"));

        horizontalLayout_2->addWidget(label_qusetions_count);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        treeWidget_qusetions = new QTreeWidget(widget_add_question);
        treeWidget_qusetions->setObjectName(QString::fromUtf8("treeWidget_qusetions"));
        treeWidget_qusetions->setDragEnabled(false);
        treeWidget_qusetions->setItemsExpandable(true);

        verticalLayout->addWidget(treeWidget_qusetions);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_save = new QPushButton(widget_add_question);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setFont(font);

        horizontalLayout->addWidget(pushButton_save);

        pushButton_cancel = new QPushButton(widget_add_question);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setFont(font);

        horizontalLayout->addWidget(pushButton_cancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(widget_add_question);

        QMetaObject::connectSlotsByName(widget_add_question);
    } // setupUi

    void retranslateUi(QWidget *widget_add_question)
    {
        widget_add_question->setWindowTitle(QApplication::translate("widget_add_question", "\346\267\273\345\212\240\346\226\260\346\265\213\350\257\225", nullptr));
        label->setText(QApplication::translate("widget_add_question", "\346\265\213\350\257\225\345\220\215\347\247\260:", nullptr));
        label_2->setText(QApplication::translate("widget_add_question", "\350\247\204\345\256\232\345\256\214\346\210\220\346\227\266\351\227\264(min):", nullptr));
        lineEdit_time->setText(QApplication::translate("widget_add_question", "30", nullptr));
        label_3->setText(QApplication::translate("widget_add_question", "\351\242\230\347\233\256:", nullptr));
        pushButton_add->setText(QApplication::translate("widget_add_question", "+", nullptr));
        pushButton_miunus->setText(QApplication::translate("widget_add_question", "-", nullptr));
        label_qusetions_count->setText(QApplication::translate("widget_add_question", "\351\242\230\347\233\256\346\225\260\351\207\217:0", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_qusetions->headerItem();
        ___qtreewidgetitem->setText(7, QApplication::translate("widget_add_question", "\345\210\206\346\225\260", nullptr));
        ___qtreewidgetitem->setText(6, QApplication::translate("widget_add_question", "\347\255\224\346\241\210", nullptr));
        ___qtreewidgetitem->setText(5, QApplication::translate("widget_add_question", "\345\244\232\351\200\211", nullptr));
        ___qtreewidgetitem->setText(4, QApplication::translate("widget_add_question", "\351\200\211\351\241\271D", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("widget_add_question", "\351\200\211\351\241\271C", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("widget_add_question", "\351\200\211\351\241\271B", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("widget_add_question", "\351\200\211\351\241\271A", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("widget_add_question", "\351\242\230\345\271\262                                                                                                 ", nullptr));
        pushButton_save->setText(QApplication::translate("widget_add_question", "\344\277\235\345\255\230", nullptr));
        pushButton_cancel->setText(QApplication::translate("widget_add_question", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget_add_question: public Ui_widget_add_question {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_ADD_QUESTION_H
