#ifndef THERMALPRINTER_H
#define THERMALPRINTER_H
#include"CommonInDeviceUtiles.h"

class ThermalPrinter : public Device
{
public:
    ThermalPrinter();
    ~ThermalPrinter();
    void SendData();
    void ReceiveData();
};

#endif // THERMALPRINTER_H
