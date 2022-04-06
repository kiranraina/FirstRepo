#include "Printer.h"

Printer::Printer()
{
    cout << "printer constructor"<< endl;
}

bool Printer::registerwithprinter(IPrinterandLap *Lpap)
{
    cout << "registerwithprinter()" << endl;
    m_receiver=Lpap;

}

bool Printer::sendingdata(int x)
{
    m_receiver->recevedata(x);
}
