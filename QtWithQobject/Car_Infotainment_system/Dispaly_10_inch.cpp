#include "Dispaly_10_inch.h"

Dispaly_10_inch::Dispaly_10_inch()
{
  cout<<"Dispaly_10_inch constructor called"<<endl;
  this->init();
  m_phone=nullptr;
  m_navi=nullptr;
  m_media=nullptr;
}
Dispaly_10_inch::~Dispaly_10_inch()
{
  cout<<"Dispaly_10_inch destructor called"<<endl;
  if(m_phone!=nullptr){
  delete m_phone;
      cout<<"m_phone destructor called"<<endl;
  }
   if(m_navi!=nullptr){
   delete m_navi;
       cout<<"m_navi destructor called"<<endl;
   }
   if(m_media!=nullptr){
   delete m_media;
       cout<<"m_media destructor called"<<endl;
   }
}
void Dispaly_10_inch::init()
{
    cout<<"Dispaly_10_inch init called"<<endl;
    if(m_phone==nullptr){
    m_phone=new PhoneFunction;
    }
    if(m_navi==nullptr){
    m_navi=new Navigation;
    }
    if(m_media==nullptr){
    m_media=new Media;
    }
}

void Dispaly_10_inch::print()
{
   cout<<"Dispaly_10_inch print called"<<endl;
}
