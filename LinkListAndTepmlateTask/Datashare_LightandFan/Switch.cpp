#include "Switch.h"

Switch::Switch()
{
    cout<<"switch constructor"<<endl;
    m_howManyRegistered=0;
}
bool Switch::registerWithMeForData(ISwitchData *ptr){
   cout<<"registerWithMeForData called"<<endl;
   if(m_howManyRegistered>=13){
       return false;
   }
   this->m_dataReciver[m_howManyRegistered]=ptr;
   m_howManyRegistered++;
   return true;
}
bool Switch::startCollectingData(){
     cout<<"startCollecting data fun called"<<endl;
     for(int i=0;i<m_howManyRegistered;i++){
         m_dataReciver[i]->takedata(10);
     }
     return true;
}
