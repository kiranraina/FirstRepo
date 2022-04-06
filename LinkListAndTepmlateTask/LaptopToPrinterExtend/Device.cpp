#include "Device.h"

Device::Device()
{
cout<<"Device constructor called"<<endl;
}
Device::~Device()
{
    cout<<"Device destructor called"<<endl;
}

void Device::SendData()
{
    cout<<"Device sendData called"<<endl;
}
void Device::ReceiveData(int x)
{
    cout<<"Device ReceiveData called"<<x<<endl;
}
