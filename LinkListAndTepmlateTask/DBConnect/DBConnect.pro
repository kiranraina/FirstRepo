TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    DB.cpp \
    CSV.cpp \
    FileFormat.cpp \
    Person.cpp

DESTDIR = $$PWD/bin
HEADERS += \
    DB.h \
    CSV.h \
    FileFormat.h \
    Person.h \
    CommanUtils.h
