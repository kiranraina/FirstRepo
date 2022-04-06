TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    CARMANAGER.cpp \
    CAR.cpp \
    BaseVersion.cpp \
    MidVersion.cpp \
    TopVersion.cpp \
    INeedVendor.cpp \
    Vendor1.cpp \
    Vendor2.cpp \
    Vendor3.cpp \
    AudioHardWare.cpp \
    INeedHardware.cpp \
    DisplayHardware.cpp \
    Woffer.cpp \
    Speaker.cpp \
    Radio.cpp \
    Twitts.cpp \
    Dispaly_8_inch.cpp \
    Dispaly_10_inch.cpp \
    Display_12_inch.cpp \
    PhoneFunction.cpp \
    Navigation.cpp \
    Media.cpp \
    ClimateControl.cpp \
    VehicleInfo.cpp \
    Wotter.cpp
DESTDIR = $$PWD/bin
HEADERS += \
    CARMANAGER.h \
    Commanutiles.h \
    CAR.h \
    BaseVersion.h \
    MidVersion.h \
    TopVersion.h \
    INeedVendor.h \
    Vendor1.h \
    Vendor2.h \
    Vendor3.h \
    AudioHardWare.h \
    INeedHardware.h \
    DisplayHardware.h \
    Woffer.h \
    Speaker.h \
    Radio.h \
    Twitts.h \
    Dispaly_8_inch.h \
    Dispaly_10_inch.h \
    Display_12_inch.h \
    PhoneFunction.h \
    Navigation.h \
    Media.h \
    ClimateControl.h \
    VehicleInfo.h \
    Wotter.h
