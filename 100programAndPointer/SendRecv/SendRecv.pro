TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    MySender.cpp \
    MyReceiver.cpp \
    ECHManger.cpp \
    MyLibarary.cpp \
    Book.cpp

HEADERS += \
    MySender.h \
    MyReceiver.h \
    ECHManger.h \
    MyLibarary.h \
    Book.h
