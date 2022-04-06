#ifndef BLUETOOTH_H
#define BLUETOOTH_H
#include"CommonInConnector.h"
#include"Device.h"

class Bluetooth : public Connector
{
public:
    Bluetooth();
    ~Bluetooth();
    void SendData(int x);
    void ReceiveData(int x);
     bool RegisterDevicewithMe(Device *dev);
private:
     Device *m_device;
};

#endif // BLUETOOTH_H
