#ifndef LASERPRINTER_H
#define LASERPRINTER_H
#include "CommonUtils.h"
#include "MyDevice.h"

class LaserPrinter : public MyDevice
{
public:
    LaserPrinter();
    ~LaserPrinter();
    void sendData();
    void receiveData(int x);
};

#endif // LASERPRINTER_H
