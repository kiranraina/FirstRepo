TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Chess.cpp \
    white.cpp \
    Black.cpp \
    Knight.cpp \
    King.cpp \
    Queen.cpp \
    Bishop.cpp \
    Rook.cpp \
    Soldiers.cpp \
    Board.cpp \
    BoardCreate.cpp

HEADERS += \
    Chess.h \
    CommanUtiles.h \
    white.h \
    Black.h \
    Knight.h \
    King.h \
    Queen.h \
    Bishop.h \
    Rook.h \
    Soldiers.h \
    Allpawn.h \
    Board.h \
    BoardCreate.h
