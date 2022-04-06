#include "ECGHardware.h"
#include "ECGSensor.h"


using namespace Device;

ECGHardware::ECGHardware()
{
  std::cout<<"ECGHardware constructor"<<endl;
  initSensor();
//  m_sensor=new ECGSensor(this);
//  init();
  m_status=false;
}
ECGHardware::~ECGHardware(){
    std::cout<<"ECGHardware destructor"<<endl;
}

void ECGHardware::operator=(const ECGHardware &EcgHw)
{
      cout<<"ECGHardware operator called"<<endl;
    for(int i=0;i<12;i++){
        *m_sensors[i]=*EcgHw.m_sensors[i];
    }
}

ECGHardware::ECGHardware(const ECGHardware &EcgHw)
{
     cout<<"ECGHardware copy constructor called"<<endl;
      initSensor();
      for(int i=0;i<12;i++){
          *m_sensors[i]=*EcgHw.m_sensors[i];
      }

}
 bool ECGHardware:: getstatus()const{
     cout<<"ECGHardware getStatus called"<<endl;
    return m_status;
}
  bool ECGHardware::setstatus(const bool status){
       cout<<"ECGHardware setStatus called"<<endl;
     m_status=status;
 }
//scope resolve with DeviceNamespace

bool ECGHardware::print(){
    cout<<"ECGHardware print"<<endl;
    return true;
}
void ECGHardware::initSensor(){
    cout<<"ECGHardware init called"<<endl;
    m_sensors=new ECGSensor*[12];
    for(int i=0;i<12;i++){
        m_sensors[i]=new ECGSensor(this);
//        m_sensors[i]->init();
    }

}

void ECGHardware::init(){
    cout<<"ECGHardware init called"<<endl;
}
bool ECGHardware::recvData()
{
cout<<"ECGHardware recvData called"<<endl;
return true;
}
bool ECGHardware::startECGHardware()
{
cout<<"ECGHardware start called"<<endl;
//m_sender = new ECGSensor(this);
//m_sender->start(this);
//m_sender->start();
    for(int i=0;i<12;i++){
        m_sensors[i]->start();
    }
return true;
}
//bool ECGHardware::startECGHardware(ECGHardware *ptr)
//{
//cout<<"ECGHardware start called"<<endl;
//for(int i=0;i<12;i++){
//    m_sensors[i]->start(ptr);
//}
//return true;
//}

