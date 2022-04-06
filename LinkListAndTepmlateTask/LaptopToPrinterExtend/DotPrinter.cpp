#include "DotPrinter.h"

DotPrinter::DotPrinter()
{
cout<<"DotPrinter constructor called"<<endl;
}
DotPrinter::~DotPrinter()
{
    cout<<"DotPrinter destructor called"<<endl;
}

void DotPrinter::SendData()
{
   cout<<"Dotpointer senddata called" <<endl;
}
void DotPrinter::ReceiveData(int x)
{
   cout<<"Dotpointer senddata called"<<x<<endl;
}
