#include "Bluetooth.h"

Bluetooth::Bluetooth()
{
cout<<"Bluetooth constructor"<<endl;
}
Bluetooth::~Bluetooth()
{
cout<<"Bluetooth destructor"<<endl;
}

void Bluetooth::takeData(int x)
{
    cout<<"Bluetooth data is "<<x<<endl;
    giveData(x);
}

void Bluetooth::giveData(int x)
{
    cout<<"Bluetooth give data"<<endl;
    m_device->receiveData(x);
}
bool Bluetooth::registerForData(MyDevice *ptr)
{
    cout<<"Bluetooth register for data"<<endl;
    this->m_device = ptr;
    return true;
}
