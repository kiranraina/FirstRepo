#ifndef BLUETOOTH_H
#define BLUETOOTH_H
#include "CommonUtils.h"
#include "Connector.h"
#include "MyDevice.h"

class Bluetooth : public Connector
{
public:
    Bluetooth();
    ~Bluetooth();
    void takeData(int x);
    void giveData(int x);
    bool registerForData(MyDevice *ptr);
private:
    MyDevice *m_device;
};

#endif // BLUETOOTH_H
