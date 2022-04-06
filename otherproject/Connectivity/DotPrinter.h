#ifndef DOTPRINTER_H
#define DOTPRINTER_H
#include "CommonUtils.h"
#include "MyDevice.h"

class DotPrinter : public MyDevice
{
public:
    DotPrinter();
    ~DotPrinter();
    void sendData();
    void receiveData(int x);
};

#endif // DOTPRINTER_H
