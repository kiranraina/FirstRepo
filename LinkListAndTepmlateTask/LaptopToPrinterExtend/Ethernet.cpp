#include "Ethernet.h"

Ethernet::Ethernet()
{

    cout<<"Ethernet constructor called"<<endl;

}
Ethernet::~Ethernet()
{

    cout<<"Ethernet destructor called"<<endl;

}

void Ethernet::SendData(int x)
{
     cout<<"Ethernet SendData called"<<endl;
     m_device->ReceiveData(x);
}

void Ethernet::ReceiveData(int x)
{
    cout<<"Ethernet ReceiveData called"<<endl;
    SendData(x);
}

bool Ethernet::RegisterDevicewithMe(Device *dev)
{
    cout<<"Ethernet RegisterDevicewithMe called"<<endl;
    m_device=dev;
    return true;

}
