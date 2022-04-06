#include "Connector.h"

Connector::Connector()
{
 cout<<"Connector constructor called"<<endl;
}
Connector::~Connector()
{
    cout<<"Connector destructor called"<<endl;
}

void Connector::SendData(int y)
{
    cout<<"Connector SendData called"<<endl;
}

bool Connector::RegisterDevicewithMe(Device *dev)
{
    cout<<"Connector RegisterDevicewithMe called"<<endl;
}
void Connector::ReceiveData(int x)
{
    cout<<"Connector ReceiveData called"<<x<<endl;
}
