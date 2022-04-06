#ifndef HDMI_H
#define HDMI_H
#include"CommonInConnector.h"
#include<Device.h>
class HDMI : public Connector
{
public:
    HDMI();
    ~HDMI();
    void SendData(int y);
    void ReceiveData(int x);
    bool RegisterDevicewithMe(Device *dev);
private:
    Device *m_device;
};

#endif // HDMI_H
