#-------------------------------------------------
#
# Project created by QtCreator 2022-03-11T12:33:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataManager
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


SOURCES += main.cpp\
        MyWidget.cpp \
    DataManger.cpp \
    CommonReader.cpp \
    _2GReader.cpp \
    _3GReader.cpp \
    NetworkReader.cpp \
    WifiReader.cpp \
    XMLReader.cpp \
    RS232Reader.cpp \
    DBReader.cpp

HEADERS  += MyWidget.h \
    DataManger.h \
    CommonReader.h \
    _2GReader.h \
    _3GReader.h \
    NetworkReader.h \
    WifiReader.h \
    XMLReader.h \
    RS232Reader.h \
    DBReader.h
