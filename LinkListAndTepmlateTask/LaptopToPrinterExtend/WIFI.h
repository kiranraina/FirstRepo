#ifndef WIFI_H
#define WIFI_H
#include"CommonInConnector.h"
#include "Device.h"
class WIFI : public Connector
{
public:
    WIFI();
    ~WIFI();
    void SendData(int x);
    void ReceiveData(int x);
    bool RegisterDevicewithMe(Device *dev);
private:
    Device *m_device;
};

#endif // WIFI_H
