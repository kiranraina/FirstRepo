#include "ThermalPrinter.h"

ThermalPrinter::ThermalPrinter()
{
cout<<"ThermalPrinter constructor"<<endl;
}

ThermalPrinter::~ThermalPrinter()
{
cout<<"ThermalPrinterr destructor"<<endl;
}

void ThermalPrinter::sendData()
{
cout<<"ThermalPrinter send data"<<endl;
}

void ThermalPrinter::receiveData(int x)
{
cout<<"ThermalPrinter data received is "<<x<<endl;
}
