#-------------------------------------------------
#
# Project created by QtCreator 2017-11-18T15:09:41
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WTester
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    widget_setting.cpp \
    newuser.cpp \
    mainwindow.cpp \
    widget_about.cpp \
    widget_answer.cpp

HEADERS += \
        widget.h \
    newuser.h \
    widget_setting.h \
    mainwindow.h \
    widget_about.h \
    widget_answer.h

FORMS += \
        widget.ui \
    widget_setting.ui \
    newuser.ui \
    mainwindow.ui \
    widget_about.ui \
    widget_answer.ui

RESOURCES += \
    ../resource.qrc \
    resource.qrc

RC_FILE += WTester.rc
