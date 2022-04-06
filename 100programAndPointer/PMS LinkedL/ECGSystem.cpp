#include "ECGSystem.h"
#include "ECGLeads.h"
ECGSystem::ECGSystem()
{
    cout << "We are in ECG System:"<<endl;
    //    init();

}

void ECGSystem::operator=(ECGSystem &ecgsys)
{
    cout << "Ecg system is created:"<<endl;
    for(int i=0;llistLeads->m_head!=nullptr;i++){
        llistLeads->m_head->data = ecgsys.llistLeads->m_head->data;
        llistLeads->m_head = llistLeads->m_head->link;
    }
}

void ECGSystem::reciveData(int x){
    cout << "ECGSystem recived Data " << x << endl;
}

bool ECGSystem::init(){
    cout<<"we are in ECG System init function"<<endl;
    llistLeads = new myLinkedList<ECGLeads>;
    for(int i=0;i<12;i++){
        m_ecgleds = new ECGLeads;
        llistLeads->addTop(m_ecgleds);
    }
    return true;
}

bool ECGSystem :: print(){
    return true;
}

bool ECGSystem::start()
{
    return true;
}

bool ECGSystem::rcvdata()
{
    return true;
}

ECGSystem::ECGSystem(const ECGSystem &ecgsys)
{
    init();
    for(int i=0;llistLeads->m_head!=nullptr;i++){

        llistLeads->m_head->data = ecgsys.llistLeads->m_head->data;
        llistLeads->m_head = llistLeads->m_head->link;
        cout<<"leads data assigned"<<endl;
    }
    cout<<"system copy constructor"<<endl;

}

bool ECGSystem::connect2HW(ECGHardware *h)
{
    cout << "Connect to HW"<<endl;
    m_ecgHW = h;
    return true;
}

bool ECGSystem::disconnectHW()
{
    cout << "Disconnect HW"<<endl;
    return true;
}

ECGSystem::~ECGSystem()
{
    cout << "ECGSystem Distructor is called "<<endl;
}

