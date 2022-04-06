#include "PatientMonitoringSystem.h"
#include "MyDate.h"

PatientMonitoringSystem::PatientMonitoringSystem()
{
    cout <<endl<< " Inside Patient Monitoring System "<<endl;
    init();
}

bool PatientMonitoringSystem::init(){
    cout << "----Inside PMS init()----" << endl;
    m_HospitalName = "RH_Hostpital";
    m_PhoneNo = "9999999999";
    m_wards = 100;
    m_current_Patient = 0;
    m_Address = nullptr;

    Print();
    if(m_Address == nullptr){
        m_Address = new Address(124,
                                "near RR temple",
                                "street 21",
                                "Temple",
                                "RR Nagar",
                                "Bangalore",
                                59000
                                );
    }

    initECGHardware();
    return true;
}

bool PatientMonitoringSystem::InputPersonDetails()
{
    int m_count;
    cout << "Enter number of patient"<<endl;
    cin >> m_count;

    //    if(m_current_Patient>m_count){
    //        cout<<"All the beds full"<<endl;
    //        return false;
    //    }


    ll_Person = new myLinkedList<Person>;
    for(int i=0;i<m_count;i++){
        m_patient = new Person;
        ll_Person->addTop(m_patient);
        int id;
        cout<<"Enter the patient Id:"<<endl;
        cin >> id;

        ll_Person->m_head->data->setId(id);


        //        m_patient->intit();
        //        ll_Person->m_head->data->Print();
    }

    return true;
}

bool PatientMonitoringSystem::initECGForPerson(){
    int whichPerson;
    cout << "Enter person to get a ECG machine system"<<endl;
    cin >> whichPerson;

    //    if(whichPerson > m_current_Patient){
    //        cout << "Patient does not exit"<<endl;
    //        return false;
    //    }

    int found=-1;
    for(int i=0;linkedList->m_head!=nullptr;i++){
        if(linkedList->m_head->data->status()==false){
            found = i;
            break;
        }
    }

    if(found==-1){
        cout<<"ECGHardware is not available"<<endl;
        return 1;
    }else{
        while(ll_Person->m_head != nullptr){
            if(ll_Person->m_head->data->getId()== whichPerson){
                ECGHardware *ech = linkedList->m_head->data;
                ll_Person->m_head->data->registerECGHardware(ech);
                ll_Person->m_head->data->initECG();
                break;
            }

            ll_Person->m_head=ll_Person->m_head->link;

        }
    }


    return true;
}

bool PatientMonitoringSystem::initECGHardware()
{
    linkedList = new myLinkedList<ECGHardware>;
    for(int i = 0; i< 10; i++){
        m_ecgHardwares = new ECGHardware;
        linkedList->addTop(m_ecgHardwares);
    }
    return true;
}


bool PatientMonitoringSystem::Print()
{
    cout << endl << "--------Hospital Details-------"<<endl;
    cout<<"Hospital Name is : "<<m_HospitalName<<endl;
    cout<<"Phone Number of Hospital : "<<m_PhoneNo<<endl;
    cout<<"Number of ward in an Hospital : "<<m_wards<<endl;
    cout<<"Current Patient in Hospital : "<<m_current_Patient<<endl;
    return true;
}

PatientMonitoringSystem::~PatientMonitoringSystem()
{
    cout<<"Patient Monitoring System Destructor is called"<<endl;
}

