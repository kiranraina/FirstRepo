#ifndef LAPTOP_H
#define LAPTOP_H
#include"Printer.h"
#include<LaptopToDeviceConnection.h>

class Laptop:public LaptopToDeviceConnection
{
public:
    Laptop();
    void start();
    void initPriniter();
     void takedata(int x);
private:
     Printer *m_printer[3];
};

#endif // LAPTOP_H
