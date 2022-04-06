TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Books.cpp \
    FileFormat.cpp \
    PDF.cpp \
    TXT.cpp \
    CSV.cpp \
    XML.cpp \
    DB.cpp \
    BINARY.cpp \
    DOCS.cpp \
    JSON.cpp

HEADERS += \
    Books.h \
    FileFormat.h \
    PDF.h \
    CommanUtiles.h \
    TXT.h \
    CSV.h \
    XML.h \
    DB.h \
    BINARY.h \
    DOCS.h \
    JSON.h
