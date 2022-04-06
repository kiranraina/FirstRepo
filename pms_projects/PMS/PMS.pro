TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    PatientMonitorSystem.cpp \
    Address.cpp \
    Person.cpp \
    MyDate.cpp \
    ECGDisplay.cpp \
    ECGLead.cpp \
    ECGSystem.cpp \
    device_layer/ECGHardware.cpp \
    device_layer/ECGSensor.cpp

HEADERS += \
    PatientMonitorSystem.h \
    Address.h \
    Person.h \
    MyDate.h \
    ECGDisplay.h \
    ECGLead.h \
    ECGSystem.h \
    device_layer/ECGHardware.h \
    device_layer/ECGSensor.h
