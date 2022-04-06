#ifndef DOTPRINTER_H
#define DOTPRINTER_H
#include"CommonInDeviceUtiles.h"

class DotPrinter: public Device
{
public:
    DotPrinter();
     ~DotPrinter();
    void SendData();
    void ReceiveData();
};

#endif // DOTPRINTER_H
