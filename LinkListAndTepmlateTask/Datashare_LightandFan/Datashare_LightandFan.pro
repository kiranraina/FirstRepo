TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ISwitchData.cpp \
    Switch.cpp \
    Light.cpp \
    Fans.cpp

HEADERS += \
    ISwitchData.h \
    Switch.h \
    Light.h \
    Fans.h \
    Commonhead.h
