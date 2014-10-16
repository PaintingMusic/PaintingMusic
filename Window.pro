#-------------------------------------------------
#
# Project created by QtCreator 2014-10-01T00:01:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Window
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    transformation.cpp

HEADERS  += mainwindow.h \
    transformation.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    ran_transform_example.txt \
    additional_info.txt \
    first_test.txt \
    first_test_0.txt
