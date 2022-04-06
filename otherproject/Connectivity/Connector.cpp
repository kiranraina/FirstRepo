#include "Connector.h"

Connector::Connector()
{
 cout<<"Connector construcor called"<<endl;
}

Connector::~Connector()
{

}

void Connector::takeData(int x)
{

}

void Connector::giveData(int x)
{
    cout<<"connector give data"<<endl;
    m_device->receiveData(x);
}
bool Connector::registerForData(MyDevice *ptr)
{
    cout<<"Connector register for data"<<endl;
    this->m_device = ptr;

    return true;
}
