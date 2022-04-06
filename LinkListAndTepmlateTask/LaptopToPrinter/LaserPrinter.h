#ifndef LASERPRINTER_H
#define LASERPRINTER_H
#include"CommonInDeviceUtiles.h"

class LaserPrinter : public Device
{
public:
    LaserPrinter();
    ~LaserPrinter();
    void SendData();
    void ReceiveData();
};

#endif // LASERPRINTER_H
