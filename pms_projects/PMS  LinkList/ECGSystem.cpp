#include "ECGSystem.h"

ECGSystem::ECGSystem()
{
    cout<<"ECGSystem constructor"<<endl;
    init();
}

void ECGSystem::TakeData(int val)
{
     cout<<"ECGSystem derived TakeData called"<<val<<endl;
}
ECGSystem::~ECGSystem()
{
    cout<<"ECGSystem destructor"<<endl;
}

void ECGSystem::operator=(const ECGSystem &Ecgsys)
{
      cout<<"ECGSystem operator called"<<endl;
//      PMSLL<ECGLead> *LLEcgLead;
//      LLEcgLead=m_LeadList;
//      LLEcgLead->m_head=m_LeadList->m_head;
      for(int i=0;m_LeadList->m_head!=nullptr;i++){
  //        *m_ecgLead[i]=*Ecgsys.m_ecgLead[i];
  //         m_LeadList->m_head->m_x=*Ecgsys.m_ecgLead;
          m_LeadList->m_head->m_x=Ecgsys.m_LeadList->m_head->m_x;
          m_LeadList->m_head=m_LeadList->m_head->m_nextAdd;
          cout<<"leads data assigned"<<endl;
      }
//      m_LeadList->m_head=LLEcgLead->m_head;
}

ECGSystem::ECGSystem(const ECGSystem &Ecgsys)
{
    cout<<"ECGSystem copy constructor called"<<endl;
    init();
//    PMSLL<ECGLead> *LLEcgLead;
//    LLEcgLead=m_LeadList;
//    LLEcgLead->m_head=m_LeadList->m_head;
    for(int i=0;m_LeadList->m_head!=nullptr;i++){
//        *m_ecgLead[i]=*Ecgsys.m_ecgLead[i];
//         m_LeadList->m_head->m_x=*Ecgsys.m_ecgLead;
        m_LeadList->m_head->m_x=Ecgsys.m_LeadList->m_head->m_x;
        m_LeadList->m_head=m_LeadList->m_head->m_nextAdd;
        cout<<"leads data assigned"<<endl;
    }
//    m_LeadList->m_head=LLEcgLead->m_head;
    cout<<"system copy constructor"<<endl;
}
bool ECGSystem::init(){
    cout<<"ECGSystem init called"<<endl;
//    m_ecgLead= new ECGLead*[12];
    m_LeadList=new PMSLL<ECGLead>;
        for(int i=0;i<12;i++){
            m_ecgLead= new ECGLead;
           m_LeadList->Add(m_ecgLead);
        }
//    cout<<m_ecgLead<<endl;
//    cout<<*m_ecgLead<<endl;
//    for(int i=0;i<12;i++){
//        m_ecgLead[i]=new ECGLead;
//    }
     return true;
}
bool ECGSystem::print(){
 cout<<"ECGSystem print called"<<endl;

 return true;}
bool ECGSystem::connect2HW(ECGHardware *h){
     cout<<"ECGSystem connect2HW called"<<endl;
    m_ecgHw=h;
 return true;
}
bool ECGSystem::disconnect(){
     cout<<"ECGSystem disconnect called"<<endl;
 return true;
}
