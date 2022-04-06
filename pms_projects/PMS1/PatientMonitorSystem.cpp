#include "PatientMonitorSystem.h"

PatientMonitorSystem::PatientMonitorSystem()
{
    cout<<"constructor"<<endl;
    m_address=nullptr;
    init();
}
PatientMonitorSystem::~PatientMonitorSystem()
{
   cout<<"destructor"<<endl;
}
bool PatientMonitorSystem::inputPersonDetails()
{
     cout<<"inputPersonDetails"<<endl;
    int count=0;
    cin>>count;
     m_pat=new Person*[count];

     m_pat1=new Person**[3];
     m_pat1[0]=new Person*[10];
     m_pat1[1]=new Person*[10];
     m_pat1[2]=new Person*[10];

    if(curent_Patient>100){
        cout<<"ALL the beds full"<<endl;
        return false;
    }
    Person *pat=new Person;
//    m_patient[curent_Patient++]=pat;
    return true;
}

bool PatientMonitorSystem::init(){
     cout<<"init"<<endl;
 m_hospitalName="rr hospital";
 if(m_address==nullptr){
    m_address=new Address;
 }
 curent_Patient=0;
 m_phone="2345678";
 m_licenseNumber="ax23";
 m_wards=100;
 print();
 return true;
}
bool PatientMonitorSystem::initECGForPerson(){
   cout<<"initECGForPerson"<<endl;
    int whichPerson;
    cin>>whichPerson;
    if(whichPerson>curent_Patient){
        cout<<"Patient does not exit";
        return false;

    }
    m_pat[whichPerson]->initECG();
}
bool PatientMonitorSystem::addPerson(Person *p){
    cout<<"*addperson"<<endl;
    m_pat[curent_Patient++]=p;
}
bool PatientMonitorSystem::addPerson(Person p1){
    cout<<"addperson"<<endl;
    m_pat[curent_Patient++]=&p1;
}
bool PatientMonitorSystem::print(){
//    for(int i=0;i<100;i++){
//        m_pat[i]->print();
//    }
    cout<<"print"<<endl;
    cout<<"m_hospitalName"<<m_hospitalName<<endl;
    cout<<"m_phone"<<m_phone<<endl;
    cout<<"m_licenseNumber"<<m_licenseNumber<<endl;
    cout<<"m_wards"<<m_wards<<endl;
    cout<<"m_licenseNumber"<<m_licenseNumber<<endl;

}
