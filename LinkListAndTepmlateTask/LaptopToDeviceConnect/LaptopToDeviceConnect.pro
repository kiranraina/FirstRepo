TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Laptop.cpp \
    Device.cpp \
    HDMI.cpp \
    Bluetooth.cpp \
    WIFI.cpp \
    USB.cpp \
    Ethernet.cpp \
    RS232.cpp

HEADERS += \
    Laptop.h \
    CommanUtiles.h \
    Device.h \
    HDMI.h \
    Bluetooth.h \
    WIFI.h \
    USB.h \
    Ethernet.h \
    RS232.h
