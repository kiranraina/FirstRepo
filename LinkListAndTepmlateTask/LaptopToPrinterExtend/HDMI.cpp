#include "HDMI.h"

HDMI::HDMI()
{
    cout<<"HDMI constructor called"<<endl;
}
HDMI::~HDMI()
{
    cout<<"HDMI constructor called"<<endl;
}

void HDMI::SendData(int x)
{
      cout<<"HDMI SendData called"<<x<<endl;
       m_device->ReceiveData(x);
}
void HDMI::ReceiveData(int x)
{
    cout<<"HDMI ReceiveData called"<<x<<endl;
    SendData(x);
}

bool HDMI::RegisterDevicewithMe(Device *dev)
{
     cout<<"HDMI RegisterDevicewithMe called"<<endl;
     m_device=dev;
     return true;

}


