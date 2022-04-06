#include "Laptop.h"
#include "Bluetooth.h"

Bluetooth::Bluetooth()
{
    cout<<"Bluetooth constructor called"<<endl;
}

void Bluetooth::PrintData()
{
     cout<<"Bluetooth printdata called"<<endl;
    m_lt->ReciveData("from Bluetooth");
}
