#ifndef LAPTOP_H
#define LAPTOP_H
#include"CommonInDeviceUtiles.h"
#include"Connector.h"

class Laptop : public Device
{
public:
    Laptop();
    ~ Laptop();
    void SendData();
    void ReceiveData();
    bool RegisterConnectwithMe(Connector *ptr);
private:
    Connector *m_ConnectType;
};

#endif // LAPTOP_H
