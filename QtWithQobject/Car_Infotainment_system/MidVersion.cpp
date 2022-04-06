#include "MidVersion.h"
#include<Vendor2.h>
MidVersion::MidVersion()
{
 cout<<"MidVersion constructor called"<<endl;
 m_vendor2=nullptr;
}
MidVersion::~MidVersion()
{
 cout<<"MidVersion destructor called"<<endl;
 if(m_vendor2!=nullptr){
 delete m_vendor2;
 }
 cout<<"m_vendor2 destructor called"<<endl;
}
//string MidVersion::getchassisNumber() const
//{
//    cout<<"MidVersion getchassisNumber called"<<endl;
//    return m_chassisNumber;
//}

//void MidVersion::setChassisNumber(const string chassisNumber)
//{
//    cout<<"MidVersion setchassisNumber called"<<endl;
//    m_chassisNumber = chassisNumber;
//}
void MidVersion::init()
{
    cout<<"MidVersion init called"<<endl;
    if(m_vendor2==nullptr){
    m_vendor2=new Vendor2;
    }
    m_vendor2->init();
}

void MidVersion::print()
{
   cout<<"MidVersion print called"<<endl;
}
