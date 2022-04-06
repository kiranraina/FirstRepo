#include "Vendor2.h"

Vendor2::Vendor2()
{
    cout<<"Vendor2 constructor called"<<endl;
    m_displayhw=nullptr;
    m_audiohw=nullptr;
}
Vendor2::~Vendor2()
{
    cout<<"Vendor2 destructor called"<<endl;
    if(m_displayhw!=nullptr){
        delete m_displayhw;
        cout<<"m_displayhw destructor called"<<endl;
    }
    if(m_audiohw!=nullptr){
        delete m_audiohw;
        cout<<"m_audiohw destructor called"<<endl;
    }
}
void Vendor2::init()
{
    cout<<"Vendor2 init called"<<endl;
    if(m_displayhw==nullptr){
    m_displayhw=new DisplayHardware(DISPLAY_10INCH);
    }
    cout<<"Display DisplayHardware finished*********************************************"<<endl;
      if(m_audiohw==nullptr){
    m_audiohw=new AudioHardWare(VENDER2);
      }
    cout<<"Display AudioHardWare finished*********************************************"<<endl;
}

void Vendor2::print()
{
    cout<<"Vendor2 print called"<<endl;
}
