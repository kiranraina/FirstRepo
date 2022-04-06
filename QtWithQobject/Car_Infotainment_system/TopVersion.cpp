#include "TopVersion.h"
#include<Vendor3.h>
TopVersion::TopVersion()
{
  cout<<"TopVersion Constructor called"<<endl;
  m_vendor3=nullptr;
}
TopVersion::~TopVersion()
{
  cout<<"TopVersion destructor called"<<endl;
  if(m_vendor3!=nullptr){
  delete m_vendor3;
  cout<<"m_vendor3 destructor called"<<endl;
  }
}
//string TopVersion::getchassisNumber() const
//{
//    cout<<"TopVersion getchassisNumber called"<<endl;
//    return m_chassisNumber;
//}

//void TopVersion::setChassisNumber(const string chassisNumber)
//{
//    cout<<"TopVersion setchassisNumber called"<<endl;
//    m_chassisNumber = chassisNumber;
//}
void TopVersion::init()
{
    cout<<"TopVersion init called"<<endl;
    if(m_vendor3==nullptr){
    m_vendor3=new Vendor3;
    }
    m_vendor3->init();
}

void TopVersion::print()
{
   cout<<"TopVersion print called"<<endl;
}
