#include "ThermalPrinter.h"

ThermalPrinter::ThermalPrinter()
{
 cout<<"ThermalPrinter constructor called"<<endl;
}
ThermalPrinter::~ThermalPrinter()
{
    cout<<"ThermalPrinter destructor called"<<endl;
}

void ThermalPrinter::SendData()
{
     cout<<"ThermalPrinter SendData called"<<endl;
}

void ThermalPrinter::ReceiveData()
{
    cout<<"ThermalPrinter ReceiveData called"<<endl;
}

