#ifndef THERMALPRINTER_H
#define THERMALPRINTER_H
#include "CommonUtils.h"
#include "MyDevice.h"

class ThermalPrinter : public MyDevice
{
public:
    ThermalPrinter();
    ~ThermalPrinter();
    void sendData();
    void receiveData(int x);
};

#endif // THERMALPRINTER_H
