#include "ECGSystem.h"

ECGSystem::ECGSystem()
{
    cout<<"ECGSystem constructor"<<endl;
    init();
}
ECGSystem::~ECGSystem()
{
    cout<<"ECGSystem destructor"<<endl;
}

void ECGSystem::operator=(const ECGSystem &Ecgsys)
{
      cout<<"ECGSystem operator called"<<endl;
      for(int i=0;i<12;i++){
          *m_ecgLead[i]=*Ecgsys.m_ecgLead[i];
      }
}

ECGSystem::ECGSystem(const ECGSystem &Ecgsys)
{
    cout<<"ECGSystem copy constructor called"<<endl;
    init();
    for(int i=0;i<12;i++){
        *m_ecgLead[i]=*Ecgsys.m_ecgLead[i];
    }
}
bool ECGSystem::init(){
    cout<<"ECGSystem init called"<<endl;
    m_ecgLead= new ECGLead*[12];
    cout<<m_ecgLead<<endl;
    cout<<*m_ecgLead<<endl;
    for(int i=0;i<12;i++){
        m_ecgLead[i]=new ECGLead;
    }
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
