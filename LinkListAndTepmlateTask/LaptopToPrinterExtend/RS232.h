#ifndef RS232_H
#define RS232_H
#include"CommonInConnector.h"
#include "Device.h"
class RS232 : public Connector
{
public:
    RS232();
    ~RS232();
    void SendData(int x);
    void ReceiveData(int x);
    bool RegisterDevicewithMe(Device *dev);
private:
    Device *m_device;
};

#endif // RS232_H
