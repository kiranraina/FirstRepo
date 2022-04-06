#include "Ethernet.h"
#include"Laptop.h"
Ethernet::Ethernet()
{
    cout<<"Ethernet constructor called "<<endl;
}

void Ethernet::PrintData()
{
    cout<<"Ethernet printdata called "<<endl;
    m_lp->ReciveData("Ethernet");
}
