#ifndef PRINTER_H
#define PRINTER_H
#include <iostream>
using namespace std;

#include "IPrinterandLap.h"

class Printer
{
public:
    Printer();
    bool registerwithprinter(IPrinterandLap *Lpap);
    bool sendingdata(int x);

private:
    IPrinterandLap *m_receiver;
};

#endif // PRINTER_H
