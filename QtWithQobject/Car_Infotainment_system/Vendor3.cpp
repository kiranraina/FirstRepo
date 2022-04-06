#include "Vendor3.h"

Vendor3::Vendor3()
{
   cout<<"vendor contructor called"<<endl;
   m_displayhw=nullptr;
   m_audiohw=nullptr;
}
Vendor3::~Vendor3()
{
   cout<<"vendor destructor called"<<endl;
    if(m_displayhw!=nullptr){
   delete m_displayhw;
   cout<<"m_displayhw destructor called"<<endl;
    }
    if(m_audiohw!=nullptr){
   delete m_audiohw;
   cout<<"m_audiohw destructor called"<<endl;
    }
}
void Vendor3::init()
{
    cout<<"Vendor3 init called"<<endl;
  if(m_displayhw==nullptr){
    m_displayhw=new DisplayHardware(DISPLAY_12INCH);
     }
     cout<<"Display DisplayHardware finished*********************************************"<<endl;
      if(m_audiohw==nullptr){
    m_audiohw=new AudioHardWare(VENDER3);
      }
     cout<<"Display AudioHardWare finished*********************************************"<<endl;
}

void Vendor3::print()
{
   cout<<"Vendor3 print called"<<endl;
}
