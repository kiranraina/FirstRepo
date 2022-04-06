#ifndef DOTPRINTER_H
#define DOTPRINTER_H
#include"CommonInDeviceUtiles.h"

class DotPrinter: public Device
{
public:
    DotPrinter();
     ~DotPrinter();
    void SendData();
    void ReceiveData(int x);
};

#endif // DOTPRINTER_H
