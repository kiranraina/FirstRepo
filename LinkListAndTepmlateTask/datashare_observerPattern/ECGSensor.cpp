#include "ECGSensor.h"

ECGSensor::ECGSensor()
{
    cout<<"ECGSensor constructor"<<endl;
    m_howManyRegistered=0;

}

bool ECGSensor::registerWithForData(INeedData *ptr)
{
   cout<<"registerWithForData function called" <<endl;
   if(m_howManyRegistered>=10){
       return false;
   }
   this->m_dataReciever[m_howManyRegistered]=ptr;
   m_howManyRegistered++;
   return true;
}

bool ECGSensor::startCollectingData()
{
   cout<<"startCollecting data fun called" <<endl;
   for(int i=0;i<m_howManyRegistered;i++){
       m_dataReciever[i]->takedata(10);
   }
   return true;
}
