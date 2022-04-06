TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Address.cpp \
        DeviceLayer/ECGHardware.cpp \
        DeviceLayer/ECGSensor.cpp \
        DeviceLayer/INeedData.cpp \
        ECGDisplay.cpp \
        ECGLeads.cpp \
        ECGSystem.cpp \
        INeedDataFEcgSystem.cpp \
        MyDate.cpp \
        PatientMonitoringSystem.cpp \
        Person.cpp \
        main.cpp \
        myLinkedList.cpp

HEADERS += \
    Address.h \
    DeviceLayer/ECGHardware.h \
    DeviceLayer/ECGSensor.h \
    DeviceLayer/INeedData.h \
    ECGDisplay.h \
    ECGLeads.h \
    ECGSystem.h \
    INeedDataFEcgSystem.h \
    MyDate.h \
    PatientMonitoringSystem.h \
    Person.h \
    myLinkedList.h
