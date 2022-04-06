#ifndef INKPRINTER_H
#define INKPRINTER_H
#include"CommonInDeviceUtiles.h"

class InkPrinter: public Device
{
public:
    InkPrinter();
     ~InkPrinter();
    void SendData();
    void ReceiveData(int x);
};

#endif // INKPRINTER_H
