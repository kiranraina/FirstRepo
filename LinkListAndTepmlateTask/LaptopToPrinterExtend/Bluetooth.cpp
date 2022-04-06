#include "Bluetooth.h"

Bluetooth::Bluetooth()
{
 cout<<"Bluetooth constructor called"<<endl;
}
Bluetooth::~Bluetooth()
{
    cout<<"Bluetooth destructor called"<<endl;
}

void Bluetooth::SendData(int x)
{
     cout<<"Bluetooth sendDta called"<<x<<endl;
     m_device->ReceiveData(x);
}

void Bluetooth::ReceiveData(int x)
{
    cout<<"Bluetooth Receivedata called"<<x<<endl;
    SendData(x);
}

bool Bluetooth::RegisterDevicewithMe(Device *dev)
{
     cout<<"Bluetooth RegisterDevicewithMe"<<endl;
     m_device=dev;
     return true;
}
