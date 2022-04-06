#include "ECGSensor.h"
using namespace Device;
ECGSensor::ECGSensor()
{
  cout<<"ECGSensor constructor called"<<endl;
  init();
}
Device::ECGSensor::~ECGSensor(){
    cout<<"ECGSensor destructor called"<<endl;
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
