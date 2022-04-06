TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Customer.cpp \
    RBI.cpp \
    SBI.cpp \
    HDFC.cpp \
    ICICI.cpp \
    CustomerLIst.cpp \
    BankManagement.cpp \
    HDFCBranch.cpp \
    ICICIBranch.cpp \
    SBIBranch.cpp

HEADERS += \
    Customer.h \
    RBI.h \
    SBI.h \
    HDFC.h \
    ICICI.h \
    Commanutiles.h \
    CustomerLIst.h \
    BankManagement.h \
    HDFCBranch.h \
    ICICIBranch.h \
    SBIBranch.h
