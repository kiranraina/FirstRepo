#include "USB.h"

USB::USB()
{
 cout<<"USB constructor called"<<endl;
}
USB::~USB()
{
    cout<<"USB destructor called"<<endl;
}

void USB::SendData()
{
    cout<<"USB SendData called"<<endl;
}

void USB::ReceiveData()
{
    cout<<"USB ReceiveData called"<<endl;
}
