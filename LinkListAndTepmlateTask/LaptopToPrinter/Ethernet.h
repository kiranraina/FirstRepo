#ifndef ETHERNET_H
#define ETHERNET_H
#include"CommonInConnector.h"

class Ethernet : public Connector
{
public:
    Ethernet();
    ~ Ethernet();
    void SendData();
    void ReceiveData();
};

#endif // ETHERNET_H
