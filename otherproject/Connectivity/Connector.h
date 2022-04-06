#ifndef CONNECTOR_H
#define CONNECTOR_H
#include "CommonUtils.h"
#include "MyDevice.h"
class Connector
{
public:
    Connector();
    ~Connector();
    virtual void takeData(int x);
    void giveData(int x);
    bool registerForData(MyDevice *ptr);

protected:
    MyDevice *m_device;
};

#endif // CONNECTOR_H
