#ifndef ETHERNET_H
#define ETHERNET_H
#include "CommonUtils.h"
#include "Connector.h"
#include "MyDevice.h"
class Ethernet : public Connector
{
public:
    Ethernet();
    ~Ethernet();
    void takeData(int x);
    void giveData(int x);
    bool registerForData(MyDevice *ptr);
private:
    MyDevice *m_device;
};

#endif // ETHERNET_H
