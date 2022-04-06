TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ECGHardware.cpp \
    ECGSEnsor.cpp

HEADERS += \
    ECGHardware.h \
    ECGSEnsor.h
