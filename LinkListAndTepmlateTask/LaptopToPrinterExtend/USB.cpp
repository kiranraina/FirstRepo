#include "USB.h"

USB::USB()
{
 cout<<"USB constructor called"<<endl;
}
USB::~USB()
{
    cout<<"USB destructor called"<<endl;
}

bool USB::RegisterDevicewithMe(Device *dev)
{
     cout<<"USB RegisterDevicewithMe called"<<endl;
     m_device=dev;
}

void USB::SendData(int x)
{
    cout<<"USB SendData called"<<endl;
    m_device->ReceiveData(x);
}

void USB::ReceiveData(int x)
{
    cout<<"USB ReceiveData called"<<endl;
    SendData(x);
}
