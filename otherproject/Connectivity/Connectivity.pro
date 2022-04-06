TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Bluetooth.cpp \
        Connector.cpp \
        DotPrinter.cpp \
        Ethernet.cpp \
        HDMI.cpp \
        InkPrinter.cpp \
        LaserPrinter.cpp \
        MyDevice.cpp \
        MyLaptop.cpp \
        RS232.cpp \
        ThermalPrinter.cpp \
        USB.cpp \
        Wifi.cpp \
        main.cpp

HEADERS += \
    Bluetooth.h \
    CommonUtils.h \
    Connector.h \
    DotPrinter.h \
    Ethernet.h \
    HDMI.h \
    InkPrinter.h \
    LaserPrinter.h \
    MyDevice.h \
    MyLaptop.h \
    RS232.h \
    ThermalPrinter.h \
    USB.h \
    Wifi.h
