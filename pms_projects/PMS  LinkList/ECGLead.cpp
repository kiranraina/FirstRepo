#include "ECGLead.h"

ECGLead::ECGLead()
{
    cout<<"ECGLead constructor"<<endl;
    init();
}

void ECGLead::operator=(const ECGLead &EcLead)
{
     cout<<"ECGLead operator called"<<endl;
     this->m_l=EcLead.m_l;
}

ECGLead::ECGLead(const ECGLead &EcLead)
{
     cout<<"ECGLead copy constructor called"<<endl;
      this->m_l=EcLead.m_l;
}
ECGLead::~ECGLead()
{
 cout<<"ECGLead destructor"<<endl;
}
bool ECGLead::print(){
cout<<"ECGLead print called"<<endl;
}
bool ECGLead::init(){
cout<<"ECGLead init called"<<endl;
}
