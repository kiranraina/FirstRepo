TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Car.cpp \
    INeedTyreData.cpp \
    TyreModel.cpp \
    Device.cpp \
    Tyre.cpp \
    INeedSeatData.cpp \
    SeatModel.cpp \
    Seat.cpp

HEADERS += \
    Car.h \
    INeedTyreData.h \
    Commanutiles.h \
    TyreModel.h \
    Device.h \
    Tyre.h \
    INeedSeatData.h \
    SeatModel.h \
    Seat.h
