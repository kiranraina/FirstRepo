#include "InkPrinter.h"

InkPrinter::InkPrinter()
{
cout<<"InkPrinter constructor called"<<endl;
}
InkPrinter::~InkPrinter()
{
    cout<<"InkPrinter destructor called"<<endl;
}

void InkPrinter::SendData()
{
    cout<<"InkPrinter SendData called"<<endl;
}
void InkPrinter::ReceiveData(int x)
{
    cout<<"InkPrinter ReceiveData called"<<x<<endl;
}
