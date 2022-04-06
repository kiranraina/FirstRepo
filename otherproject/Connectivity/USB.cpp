#include "USB.h"

USB::USB()
{
cout<<"USB constructor"<<endl;
}

USB::~USB()
{
cout<<"USB destructor"<<endl;
}

void USB::takeData(int x)
{
    cout<<"USB data is "<<x<<endl;
    giveData(x);
}

void USB::giveData(int x)
{
    cout<<"USB give data"<<endl;
    m_device->receiveData(x);
}
bool USB::registerForData(MyDevice *ptr)
{
    cout<<"USB register for data"<<endl;
    this->m_device = ptr;
    return true;
}
