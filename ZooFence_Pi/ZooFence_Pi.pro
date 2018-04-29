#-------------------------------------------------
#
# Project created by QtCreator 2018-04-19T21:46:25
#
#-------------------------------------------------

QT       += core gui widgets multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZooFence_Pi
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    introduce.cpp \
    welcomepage.cpp \
    pageindex.cpp \
    login.cpp \
    userbook.cpp \
    alertpage9.cpp \
    page5.cpp \
    page6.cpp \
    page7.cpp \
    page8.cpp \
    page10.cpp \
    clickablelabel.cpp

HEADERS += \
    introduce.h \
    welcomepage.h \
    pageindex.h \
    qss.h \
    login.h \
    userbook.h \
    alertpage9.h \
    page5.h \
    page6.h \
    page7.h \
    page8.h \
    page10.h \
    clickablelabel.h

RESOURCES += \
    resources.qrc

FORMS += \
    introduce.ui \
    welcomepage.ui \
    login.ui \
    userbook.ui \
    alertpage9.ui \
    page5.ui \
    page6.ui \
    page7.ui \
    page8.ui \
    page10.ui
