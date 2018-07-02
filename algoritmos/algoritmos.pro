#-------------------------------------------------
#
# Project created by QtCreator 2018-06-07T19:44:58
#
#-------------------------------------------------

QT       += core gui
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = algoritmos
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
        mainwindow.cpp \
    random.cpp \
    formapop.cpp \
    plot.cpp \
    plot3.cpp \
    plot4.cpp \
    plot5.cpp \
    plot6.cpp \
    plot7.cpp \
    quicksort.cpp \
    bubblesort.cpp \
    merge.cpp \
    selectionsort.cpp \
    shellsort.cpp \
    comparacao.cpp \
    sorts.cpp \
    insertionsort.cpp \
    timsort.cpp

HEADERS += \
        mainwindow.h \
    random.h \
    formapop.h \
    plot.h \
    plot3.h \
    plot4.h \
    plot5.h \
    plot6.h \
    plot7.h \
    quicksort.h \
    bubblesort.h \
    merge.h \
    selectionsort.h \
    shellsort.h \
    comparacao.h \
    sorts.h \
    insertionsort.h \
    timsort.h

FORMS += \
        mainwindow.ui \
    formapop.ui \
    plot.ui \
    plot3.ui \
    plot4.ui \
    plot5.ui \
    plot6.ui \
    plot7.ui \
    comparacao.ui

DISTFILES +=
