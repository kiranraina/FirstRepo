#include "WIFI.h"

WIFI::WIFI()
{
 cout<<"WIFI constructor called"<<endl;
}
WIFI::~WIFI()
{
    cout<<"WIFI destructor called"<<endl;
}

bool WIFI::RegisterDevicewithMe(Device *dev)
{
    cout<<"WIFI destructor called"<<endl;
    m_device=dev;
}

void WIFI::SendData(int x)
{
    cout<<"WIFI SendData called"<<endl;
    m_device->ReceiveData(x);
}

void WIFI::ReceiveData(int x)
{
    cout<<"WIFI ReceiveData called"<<endl;
    SendData(x);

}
