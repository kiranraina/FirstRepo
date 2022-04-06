TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    INeedData.cpp \
    ECGSensor.cpp \
    ECGHardware.cpp

HEADERS += \
    INeedData.h \
    ECGSensor.h \
    ECGHardware.h \
    CommonUtils.h
