#include "WIFI.h"
#include"Laptop.h"
WIFI::WIFI()
{
    cout<<"WIFI constructor called"<<endl;
}

void WIFI::PrintData()
{
    cout<<"WIFI PrintData called"<<endl;
    m_lpW->ReciveData("Ethernet");
}

