#include "Bluetooth.h"

Bluetooth::Bluetooth()
{
 cout<<"Bluetooth constructor called"<<endl;
}
Bluetooth::~Bluetooth()
{
    cout<<"Bluetooth destructor called"<<endl;
}

void Bluetooth::SendData()
{
     cout<<"Bluetooth sendDta called"<<endl;
}

void Bluetooth::ReceiveData()
{
     cout<<"Bluetooth Receivedata called"<<endl;
}
