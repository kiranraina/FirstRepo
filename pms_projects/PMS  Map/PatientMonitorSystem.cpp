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
    this->print();
    this->initECGHardware();

    // m_address->print();
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
//    m_pat=new Person*[count];
//    if(curent_Patient>count){
//        cout<<"ALL the beds full"<<endl;
//        return false;
//    }
//    m_personList=new PMSLL<Person>;
    m_personMap=new map<PERSON_ID,Person*>;
    for( i=0;i<count;i++){
        m_pat=new Person;
        int id;
        cout<<"Person Id"<<endl;
        cin>>id;
        m_pat->setId(id);
        m_personMap->insert({m_pat->getId(),m_pat});
//        m_personList->Add(m_pat);
    }
    return true;
}

bool PatientMonitorSystem::initECGForPerson(){

    cout<<" PatientMonitorSystem initECGForPerson called"<<endl;
    int whichPerson;
    cout<<"Enter the which person u want"<<endl;
    cin>>whichPerson;
    int found=-1;
    for(int i=0;m_ECGHardwareList!=nullptr;i++){
        if(m_ECGHardwareList->m_head->m_x->getstatus()==false)
        {
            found=i;
            break;
        }

//        m_ECGHardwareList->m_head=m_ECGHardwareList->m_head->m_nextAdd;
    }
    if(found==-1){
        cout<<"ECGHardware in not available"<<endl;
        return 1;
    }
else{
        ECGHardware *ech=new ECGHardware;
        map<PERSON_ID,Person*>::iterator it;
        it=m_personMap->begin();
        while(it!=m_personMap->end()){
            pair<PERSON_ID,Person*>item=*it;
            int id=item.first;
            Person *m_pat=item.second;
            if(id==whichPerson){
                m_pat->RegisterECGHardware(ech);
                m_pat->initECG();
                break;
            }
            it++;
        }
//        while (m_personList->m_head!=nullptr) {
//            if(m_personList->m_head->m_x->getId()==whichPerson){
//                ECGHardware *ech=m_ECGHardwareList->m_head->m_x;

//                m_personList->m_head->m_x->RegisterECGHardware(ech);
//                m_personList->m_head->m_x->initECG();
//                break;

//            }
//            m_personList->m_head=m_personList->m_head->m_nextAdd;

//        }
    }


    return true;
}

bool PatientMonitorSystem::print(){

    cout<<"PatientMonitorSystem print function called"<<endl;
    cout<<"m_hospitalName"<<m_hospitalName<<endl;
    cout<<"m_phone"<<m_phone<<endl;
    cout<<"m_licenseNumber"<<m_licenseNumber<<endl;
    cout<<"m_wards"<<m_wards<<endl;

}
bool PatientMonitorSystem::initECGHardware(){
    cout<<"initECGHardware  function called"<<endl;
    m_ECGHardwareList=new PMSLL<ECGHardware>;
    for(int i=0;i<10;i++){
        m_ecgHardwares =new Device::ECGHardware;
        m_ECGHardwareList->Add(m_ecgHardwares);

    }
}
