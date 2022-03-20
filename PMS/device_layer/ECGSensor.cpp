#include "ECGSensor.h"
using namespace Device;
ECGSensor::ECGSensor()
{
  cout<<"ECGSensor constructor called"<<endl;
 init();
   m_howManyRegistered=0;
}
Device::ECGSensor::~ECGSensor(){
    cout<<"ECGSensor destructor called"<<endl;
}

bool ECGSensor::Registerhardwarewithsensor(SenorDataGet *ptr)
{
     cout<<"Registerhardware with sensor function called" <<endl;
     if(m_howManyRegistered>=10){
         return false;
     }
     this->m_datareciver[m_howManyRegistered]=ptr;
     m_howManyRegistered++;
//        cout<<"Registerhardware with sensor function called111" <<endl;
     return true;
}

void ECGSensor::operator=(const ECGSensor &Es)
{
    cout<<"ECGSensor operator called"<<endl;
    this->m_sen=Es.m_sen;
}

ECGSensor::ECGSensor(const ECGSensor &Es)
{
    cout<<"ECGSensor copy constructor called"<<endl;
     this->m_sen=Es.m_sen;
}
ECGSensor::ECGSensor(ECGHardware *ecghw)
{
  cout<<"ECGSensor constructor parameter called"<<endl;
  m_hw=ecghw;
  init();
}
void Device::ECGSensor::print(){
     cout<<"ECGSensor print called"<<endl;
}
void Device::ECGSensor::init(){
    cout<<"ECGSensor init called"<<endl;
}
//bool Device::ECGSensor::start(ECGHardware *r){
//    cout<<"ECGSensor start parameter called"<<endl;
//  r->recvData();
//  return true;
//}
bool Device::ECGSensor::start()
{
cout<<"ECGSensor start called"<<endl;
m_hw->recvData();
//cout<<m_hw<<endl;
return true;
}
bool ECGSensor::startCollectingData(){
    cout<<"startCollectingData function called"<<endl;
    for(int i=0;i<m_howManyRegistered;i++){
    m_datareciver[i]->ReceiveData(10);
    }
     return true;
}
 bool  ECGSensor::stop(){
      cout<<" ECGHardware stop function called"<<endl;
       return true;
 }
bool Device::ECGSensor::publishData()
{
cout<<"ECGSensor publishData called"<<endl;
 return true;
}
