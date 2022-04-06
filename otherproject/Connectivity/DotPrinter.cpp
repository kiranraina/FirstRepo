#include "DotPrinter.h"

DotPrinter::DotPrinter()
{
cout<<"Dot Printer constructor"<<endl;
}

DotPrinter::~DotPrinter()
{
cout<<"Dot Printer destructor"<<endl;
}

void DotPrinter::sendData()
{
cout<<"Dot Printer send data"<<endl;
}

void DotPrinter::receiveData(int x)
{
cout<<"Dot Printer data received is "<<x<<endl;
}
