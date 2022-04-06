#include "HDMI.h"

HDMI::HDMI()
{
cout<<"HDMI constructor"<<endl;
}

HDMI::~HDMI()
{
cout<<"HDMI destructor"<<endl;
}

void HDMI::takeData(int x)
{
    cout<<"HDMI data is "<<x<<endl;
    giveData(x);
}

void HDMI::giveData(int x)
{
    cout<<"HDMI give data"<<endl;
    this->m_device->receiveData(x);

}

//bool HDMI::registerForData(MyDevice *ptr)
//{
//    cout<<"HDMI register for data"<<endl;
//    this->m_device = ptr;
//    return true;
//}
