
#include "HDMI.h"
#include"Laptop.h"
HDMI::HDMI()
{
    cout<<"Hdmi constructor called"<<endl;
}

void HDMI::PrintData()
{
    cout<<"Hdmi printdata called"<<endl;
     m_lph->ReciveData("Hdmi");
}


