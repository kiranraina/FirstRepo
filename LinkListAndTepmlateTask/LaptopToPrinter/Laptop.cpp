#include "Laptop.h"

Laptop::Laptop()
{
    cout<<"Laptop constructor called"<<endl;
}
Laptop::~Laptop()
{
    cout<<"Laptop destructor called"<<endl;
}
void Laptop::SendData()
{
     cout<<"Laptop SendData called"<<endl;
     m_ConnectType->ReceiveData(10);
}

bool Laptop::RegisterConnectwithMe(Connector *ptr)
{
    cout<<" Laptop RegisterConnectwithMe called"<<endl;
    m_ConnectType=ptr;

}

void Laptop::ReceiveData()
{
     cout<<" Laptop ReciveData called"<<endl;
}
