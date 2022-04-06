#include "Ethernet.h"

Ethernet::Ethernet()
{
cout<<"Bluetooth constructor"<<endl;
}

Ethernet::~Ethernet()
{
    cout<<"Bluetooth destructor"<<endl;
}

void Ethernet::takeData(int x)
{
    cout<<"Bluetooth data is "<<x<<endl;
    giveData(x);
}

void Ethernet::giveData(int x)
{
    cout<<"Bluetooth give data"<<endl;
    m_device->receiveData(x);
}
bool Ethernet::registerForData(MyDevice *ptr)
{
    cout<<"Bluetooth register for data"<<endl;
    this->m_device = ptr;
    return true;
}
