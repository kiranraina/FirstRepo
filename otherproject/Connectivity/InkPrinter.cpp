#include "InkPrinter.h"

InkPrinter::InkPrinter()
{
cout<<"InkPrinter constructor"<<endl;
}

InkPrinter::~InkPrinter()
{
cout<<"InkPrinter destructor"<<endl;
}

void InkPrinter::sendData()
{
cout<<"InkPrinter send data"<<endl;
}

void InkPrinter::receiveData(int x)
{
cout<<"InkPrinter data received is "<<x<<endl;
}
