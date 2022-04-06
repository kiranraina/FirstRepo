#include "PatientMonitorSystem.h"

PatientMonitorSystem::PatientMonitorSystem()
{
    cout<<" PatientMonitorSystem constructor called"<<endl;
    m_address=nullptr;
    init();
}
PatientMonitorSystem::~PatientMonitorSystem()
{
   cout<<"PatientMonitorSystem destructor called "<<endl;
}
bool PatientMonitorSystem::init(){
     cout<<"PatientMonitorSystem init function called"<<endl;
 m_hospitalName="rr hospital";
 if(m_address==nullptr){
    m_address=new Address();
 }
 m_phone="2345678";
 m_licenseNumber="ax23";
 m_wards=100;
 m_address->print();
 print();
 initECGHardware();
 cout<<"--------completed init() PMS--------"<<endl;

 return true;
}
bool PatientMonitorSystem::inputPersonDetails()
{
     cout<<"Enter inputPersonDetails function "<<endl;
    int count=0,i;
    curent_Patient=0;
    cout<<"Enter the how many person"<<endl;
    cin>>count;
     cout<<"count of patient"<<count<<endl;
     m_pat=new Person*[count];
     if(curent_Patient>count){
         cout<<"ALL the beds full"<<endl;
         return false;
     }
    for( i=0;i<count;i++){
         Person *pat=new Person;
         m_pat[curent_Patient++]=pat;
    }
    return true;
}

bool PatientMonitorSystem::initECGForPerson(){

   cout<<" PatientMonitorSystem initECGForPerson called"<<endl;
    int whichPerson;
    cout<<"Enter the which person u want"<<endl;
    cin>>whichPerson;
    if(whichPerson>curent_Patient){
        cout<<"Patient does not exit";
        return false;
    }
    m_pat[whichPerson]->initECG();
    int found=-1;
    for(int i=0;i<10;i++){
        if(m_ecgHardwares[i]->getstatus()==false)
        {
            found=i;
            break;
        }
    }
        if(found==-1){
            cout<<"ECGHardware in not available"<<endl;
            return 1;
        }

        ECGHardware *ech=m_ecgHardwares[found];
         m_pat[whichPerson]->RegisterECGHardware(ech);
         return true;
       }

bool PatientMonitorSystem::print(){

    cout<<"PatientMonitorSystem print function called"<<endl;
    cout<<"m_hospitalName"<<m_hospitalName<<endl;
    cout<<"m_phone"<<m_phone<<endl;
    cout<<"m_licenseNumber"<<m_licenseNumber<<endl;
    cout<<"m_wards"<<m_wards<<endl;
    cout<<"m_licenseNumber"<<m_licenseNumber<<endl;

}
bool PatientMonitorSystem::initECGHardware(){
    cout<<"initECGHardware  function called"<<endl;
    m_ecgHardwares =new Device::ECGHardware*[10];
    for(int i=0;i<10;i++){
        m_ecgHardwares[i]=new Device::ECGHardware;
        m_ecgHardwares[i]->startECGHardware();
    }
}
