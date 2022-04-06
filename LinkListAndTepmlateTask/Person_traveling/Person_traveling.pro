TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Person.cpp \
    Vehicle.cpp \
    Bus.cpp \
    Walk.cpp \
    Bike.cpp \
    Auto.cpp

HEADERS += \
    Person.h \
    Vehicle.h \
    Bus.h \
    CommonUtiles.h \
    Walk.h \
    Bike.h \
    Auto.h
