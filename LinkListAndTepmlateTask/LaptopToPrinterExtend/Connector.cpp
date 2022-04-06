#include "Connector.h"

Connector::Connector()
{
 cout<<"Connector constructor called"<<endl;
}
Connector::~Connector()
{
    cout<<"Connector destructor called"<<endl;
}

void Connector::SendData(int x)
{
    cout<<"Connector SendData called"<<x<<endl;
    m_device->ReceiveData(x);
}

bool Connector::RegisterDevicewithMe(Device *dev)
{
    cout<<"Connector RegisterDevicewithMe called"<<endl;
    m_device=dev;
}
void Connector::ReceiveData(int x)
{
    cout<<"Connector ReceiveData called"<<x<<endl;
    SendData(x);

}
