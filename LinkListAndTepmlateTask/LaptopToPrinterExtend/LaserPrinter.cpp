#include "LaserPrinter.h"

LaserPrinter::LaserPrinter()
{
 cout<<"LaserPrinter constructor called"<<endl;
}
LaserPrinter::~LaserPrinter()
{
    cout<<"LaserPrinter destructor called"<<endl;
}

void LaserPrinter::SendData()
{
    cout<<"LaserPrinter SendData called"<<endl;
}

void LaserPrinter::ReceiveData(int x)
{
     cout<<"LaserPrinter ReceiveData called"<<x<<endl;
}

