#include "RS232.h"

RS232::RS232()
{
 cout<<"RS232 constructor called"<<endl;
}
RS232::~RS232()
{
    cout<<"RS232 constructor called"<<endl;
}

bool RS232::RegisterDevicewithMe(Device *dev)
{
    cout<<"RS232 RegisterDevicewithMe called"<<endl;
    m_device=dev;
    return true;
}

void RS232::SendData(int x)
{
    cout<<"RS232 Senddata called"<<endl;
    m_device->ReceiveData(x);
}

void RS232::ReceiveData(int x)
{
    cout<<"RS232 ReceiveData called"<<endl;
    SendData(x);
}


