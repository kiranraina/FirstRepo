#include "Printer.h"

Printer::Printer()
{
  cout<<"Printer constructor called"<<endl;
}

bool Printer::registerWithForData(LaptopToDeviceConnection *ptr)
{
    cout<<"  Printer RegisterWithForData called"<<endl;
    m_recv=ptr;
    return true;
}

bool Printer::startCollectingData(int y)
{
    cout<<"  Printer startCollectingData called"<<endl;
    m_recv->takedata(y);
    return true;
}
