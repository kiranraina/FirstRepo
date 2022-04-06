#ifndef PRINTER_H
#define PRINTER_H
#include<CommanUtiles.h>


class Printer
{
public:
    Printer();
    bool registerWithForData(LaptopToDeviceConnection *ptr);
    bool startCollectingData(int y);
private:
    LaptopToDeviceConnection *m_recv;

};

#endif // PRINTER_H
