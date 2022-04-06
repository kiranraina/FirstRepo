#include "RS232.h"

RS232::RS232()
{
cout<<"RS232 constructor"<<endl;
}

RS232::~RS232()
{
cout<<"RS232 destructor"<<endl;
}

void RS232::takeData(int x)
{
    cout<<"RS232 data is "<<x<<endl;
    giveData(x);
}

void RS232::giveData(int x)
{
    cout<<"RS232 give data"<<endl;
    m_device->receiveData(x);
}
bool RS232::registerForData(MyDevice *ptr)
{
    cout<<"RS232 register for data"<<endl;
    this->m_device = ptr;
    return true;
}
