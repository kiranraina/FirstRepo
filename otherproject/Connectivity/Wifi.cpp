#include "Wifi.h"

Wifi::Wifi()
{
cout<<"Wifi constructor"<<endl;
}

Wifi::~Wifi()
{
cout<<"Wifi destructor"<<endl;
}

void Wifi::takeData(int x)
{
    cout<<"Wifi data is "<<x<<endl;
    giveData(x);
}

void Wifi::giveData(int x)
{
    cout<<"Wifi give data"<<endl;
    m_device->receiveData(x);
}
bool Wifi::registerForData(MyDevice *ptr)
{
    cout<<"Wifi register for data"<<endl;
    this->m_device = ptr;
    return true;
}
