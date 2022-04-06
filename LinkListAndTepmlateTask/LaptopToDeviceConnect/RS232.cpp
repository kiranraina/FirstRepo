#include "RS232.h"
#include"Laptop.h"
RS232::RS232()
{
    cout<<"RS232 constructor called"<<endl;
}

void RS232::PrintData()
{
     cout<<"RS232 printdata called"<<endl;
       m_lpR->ReciveData("Ethernet");
}
