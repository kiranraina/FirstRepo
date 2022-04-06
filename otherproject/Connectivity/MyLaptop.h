#ifndef MYLAPTOP_H
#define MYLAPTOP_H
#include "CommonUtils.h"
#include <MyDevice.h>
#include "Connector.h"

class MyLaptop : public MyDevice
{
public:
    MyLaptop();
    ~MyLaptop();
    void sendData();
    void receiveData(int x);
    bool registerForData(Connector *ptr);
private:
    Connector *m_connector;
};

#endif // MYLAPTOP_H
