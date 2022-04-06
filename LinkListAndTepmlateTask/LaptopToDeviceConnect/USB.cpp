#include "USB.h"
#include"Laptop.h"
USB::USB()
{
    cout<<"USB constructor called"<<endl;
}

void USB::PrintData()
{
   cout<<"USB PrintData called"<<endl;
       m_lpU->ReciveData("Ethernet");
}

