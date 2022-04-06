#ifndef USB_H
#define USB_H
#include"CommonInConnector.h"
#include "Device.h"
class USB : public Connector
{
public:
    USB();
    ~USB();
    void SendData(int x);
    void ReceiveData(int x);
    bool RegisterDevicewithMe(Device *dev);
private:
    Device *m_device;
};

#endif // USB_H
