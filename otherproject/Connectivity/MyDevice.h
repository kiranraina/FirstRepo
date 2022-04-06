#ifndef MYDEVICE_H
#define MYDEVICE_H
#include "CommonUtils.h"

class MyDevice
{
public:
    MyDevice();
    ~MyDevice();
    virtual void sendData();
    virtual void receiveData(int x);
};

#endif // MYDEVICE_H
