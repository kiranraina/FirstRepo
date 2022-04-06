#ifndef INKPRINTER_H
#define INKPRINTER_H
#include "CommonUtils.h"
#include "MyDevice.h"

class InkPrinter : public MyDevice
{
public:
    InkPrinter();
    ~InkPrinter();
    void sendData();
    void receiveData(int x);
};

#endif // INKPRINTER_H
