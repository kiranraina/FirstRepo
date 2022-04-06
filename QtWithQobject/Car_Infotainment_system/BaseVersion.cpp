#include "BaseVersion.h"
#include<Vendor1.h>
BaseVersion::BaseVersion()
{
  cout<<"BaseVersion constructor called"<<this<<endl;
  m_vendor1=nullptr;
}
BaseVersion::~BaseVersion()
{
  cout<<"BaseVersion destructor called"<<endl;
   if(m_vendor1!=nullptr){
    delete m_vendor1;
   }
}
void BaseVersion::init()
{
    cout<<"BaseVersion init called"<<endl;

    m_vendor1=new Vendor1;
    m_vendor1->init();
}

void BaseVersion::print()
{
   cout<<"BaseVersion print called"<<endl;
}

//string BaseVersion::getchassisNumber() const
//{
//    cout<<"BaseVersion getchassisNumber called"<<endl;
//    return m_chassisNumber;
//}

//void BaseVersion::setChassisNumber(const string chassisNumber)
//{
//    cout<<"BaseVersion setchassisNumber called"<<endl;
//    m_chassisNumber = chassisNumber;
//}

//void BaseVersion::receiveData(Vendor1 *ven)
//{
//     cout<<"BaseVersion receiveData called"<<endl;
//     ven->init();
//}
