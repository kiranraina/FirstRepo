#ifndef BLUETOOTH_H
#define BLUETOOTH_H
#include"CommonInConnector.h"

class Bluetooth : public Connector
{
public:
    Bluetooth();
    ~Bluetooth();
    void SendData();
    void ReceiveData();
};

#endif // BLUETOOTH_H
