TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Laptop.cpp \
    Printer.cpp \
    LaptopToDeviceConnection.cpp

HEADERS += \
    Laptop.h \
    Printer.h \
    LaptopToDeviceConnection.h \
    CommanUtiles.h
