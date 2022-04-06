
#include "Laptop.h"

Laptop::Laptop(int x)
{

    cout<<"Laptop constructor called"<<endl;
    if(x==1){
     m_type=new HDMI;
    }
    if(x==2){
     m_type=new Bluetooth;
    }
    if(x==3){
     m_type=new WIFI;
    }
    if(x==4){
     m_type=new Ethernet;
    }
    if(x==6){
     m_type=new RS232;
    }
    if(x==7){
     m_type=new USB;
    }
}


void Laptop::SendData()
{
     cout<<"Laptop SendData called"<<endl;
     m_type->PrintData();
}

void Laptop::ReciveData(string data)
{
     cout<<" ReciveData called"<<data<<endl;
}
