#ifndef BLUETOOTH_H
#define BLUETOOTH_H
#include"CommanUtiles.h"
class Laptop;
class Bluetooth:public Device
{
public:
    Bluetooth();
    void PrintData();
private:
    Laptop *m_lt;
};

#endif // BLUETOOTH_H
