TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Mobile.cpp \
    Redmi.cpp \
    Samsung.cpp

HEADERS += \
    Mobile.h \
    Redmi.h \
    Samsung.h
