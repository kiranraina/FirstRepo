#include "ECGHardware.h"
#include "ECGSensor.h"
#include "myLinkedList.h"
using namespace Device;
ECGHardware::ECGHardware()
{
    cout << "Inside ECGHardware constructor"<<endl;
    m_status = false;
    initSensor();
}

bool ECGHardware::print()
{
    cout<<"Inside ECGHardware Print"<<endl;
    return true;
}


//Scope resolution with DeviceNamespace
Device::ECGHardware::~ECGHardware()
{
    cout<<"ECGHardware Destroctor Called"<<endl;
}

void ECGHardware::reciveSenData(int x){
    cout << "Derived Ecg Sensor " << x <<endl;
    m_dataRecFmECGHw->reciveData(x);
}

ECGHardware::ECGHardware(const ECGHardware &ecg)
{
    m_status = false;
    initSensor();
    this->setStatus(m_status);
//    m_llEcgSensor = new myLinkedList<ECGSensor>;
    for(int i=0;i<12;i++){
//        *m_sensors[i] = *ecg.m_sensors[i];
        cout<<"sensor data assigned"<<endl;
    }
    cout << "Inside ECGHardware copy constructor"<<endl;
}

void ECGHardware::initSensor()
{
    cout << "Hardware init sensor called"<<endl;
    m_llEcgSensor = new myLinkedList<ECGSensor>;
    for(int i=0;i<12;i++){
        m_sensors=new ECGSensor(this);
        m_llEcgSensor->add(m_sensors);
    }
}

bool ECGHardware::reciveData()
{
    cout << "Data Has been recived"<<endl;
    return true;

}

bool ECGHardware::start()
{
    cout<<"ECGHardware started"<<endl;
    for(int i=0;m_llEcgSensor->m_head!=nullptr;i++){
        m_llEcgSensor->m_head->data->registerWithMe(this);
         m_llEcgSensor->m_head->data->startCollectingData();
        m_llEcgSensor->m_head=m_llEcgSensor->m_head->link;
    }
    return true;
}

void ECGHardware::operator=(ECGHardware &ecgh)
{
    for(int i=0;i<12;i++){
        //        m_sensors[i]->setX(ecgh.m_sensors[i]->getX());
//        *m_sensors[i] = *ecgh.m_sensors[i];
        cout<<"sensor data assigned"<<endl;
    }
    cout<<"assigned"<<endl;
}

void ECGHardware::registerWithMe(INeedDataFEcgSystem* ind){

    m_dataRecFmECGHw = ind;

}

bool ECGHardware::status() const
{
    return m_status;
}

void ECGHardware::setStatus(bool Status)
{
    m_status = Status;

}


