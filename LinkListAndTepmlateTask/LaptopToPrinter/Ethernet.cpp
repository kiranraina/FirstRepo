#include "Ethernet.h"

Ethernet::Ethernet()
{

    cout<<"Ethernet constructor called"<<endl;

}
Ethernet::~Ethernet()
{

    cout<<"Ethernet destructor called"<<endl;

}

void Ethernet::SendData()
{
     cout<<"Ethernet SendData called"<<endl;
}

void Ethernet::ReceiveData()
{
     cout<<"Ethernet ReceiveData called"<<endl;
}
