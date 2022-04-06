#ifndef WIFI_H
#define WIFI_H
#include "CommonUtils.h"
#include "Connector.h"
#include "MyDevice.h"
class Wifi : public Connector
{
public:
    Wifi();
    ~Wifi();
    void takeData(int x);
    void giveData(int x);
    bool registerForData(MyDevice *ptr);
private:
    MyDevice *m_device;
};

#endif // WIFI_H
