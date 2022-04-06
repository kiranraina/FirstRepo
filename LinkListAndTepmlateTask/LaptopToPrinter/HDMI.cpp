#include "HDMI.h"

HDMI::HDMI()
{
    cout<<"HDMI constructor called"<<endl;
}
HDMI::~HDMI()
{
    cout<<"HDMI constructor called"<<endl;
}

void HDMI::SendData(int y)
{
      cout<<"HDMI SendData called"<<endl;
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
     m_device->ReceiveData();

}


