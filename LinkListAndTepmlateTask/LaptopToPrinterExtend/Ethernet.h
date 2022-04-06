#ifndef ETHERNET_H
#define ETHERNET_H
#include"CommonInConnector.h"
#include "Device.h"
class Ethernet : public Connector
{
public:
    Ethernet();
    ~ Ethernet();
    void SendData(int x);
    void ReceiveData(int x);
    bool RegisterDevicewithMe(Device *dev);
private:
    Device *m_device;
};

#endif // ETHERNET_H
