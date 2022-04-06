TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Device.cpp \
    Connector.cpp \
    Laptop.cpp \
    InkPrinter.cpp \
    DotPrinter.cpp \
    LaserPrinter.cpp \
    ThermalPrinter.cpp \
    HDMI.cpp \
    Bluetooth.cpp \
    WIFI.cpp \
    USB.cpp \
    RS232.cpp \
    Ethernet.cpp

HEADERS += \
    Device.h \
    Connector.h \
    Laptop.h \
    InkPrinter.h \
    DotPrinter.h \
    LaserPrinter.h \
    ThermalPrinter.h \
    HDMI.h \
    Bluetooth.h \
    WIFI.h \
    USB.h \
    RS232.h \
    Ethernet.h \
    CommonInConnector.h \
    CommonInDeviceUtiles.h
