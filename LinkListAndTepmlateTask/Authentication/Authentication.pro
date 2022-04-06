TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    GoogleAuthentication.cpp \
    LinkedInAuthentication.cpp

HEADERS += \
    Authentications.h \
    GoogleAuthentication.h \
    LinkedInAuthentication.h
