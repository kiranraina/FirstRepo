#include "Vendor1.h"
//#include<BaseVersion.h>
Vendor1::Vendor1()
{
  cout<<"Vendor1 constructor called"<<endl;
  m_displayhw=nullptr;
  m_audiohw=nullptr;
}
Vendor1::~Vendor1()
{
  cout<<"Vendor1 destructor called"<<endl;
  if(m_displayhw!=nullptr){
  delete m_displayhw;

  }
  if(m_audiohw!=nullptr){
  delete m_audiohw;

  }
}
void Vendor1::init()
{
    cout<<"Vendor1 init called"<<endl;
    if(m_displayhw==nullptr){
    m_displayhw=new DisplayHardware(DISPLAY_8INCH);
    }
    cout<<"Display hardware finished*********************************************"<<endl;
    if(m_audiohw==nullptr){
    m_audiohw=new AudioHardWare(VENDER1);
    }
    cout<<"Display audiohardware finished*********************************************"<<endl;

}

//bool Vendor1::Registerbase(BaseVersion *ptr)
//{
//        cout<<"Vendor1 Registerbase called"<<endl;
//        ptr->receiveData(this);
//}

void Vendor1::print()
{
   cout<<"Vendor1 print called"<<endl;
}
