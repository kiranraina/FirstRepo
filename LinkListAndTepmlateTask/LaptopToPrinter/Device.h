#ifndef DEVICE_H
#define DEVICE_H
#include<iostream>
using namespace std;

class Device
{
public:
    Device();
    ~Device();
    virtual void SendData();
    virtual void ReceiveData();
};

#endif // DEVICE_H
