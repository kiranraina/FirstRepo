#include "Dispaly_8_inch.h"

Dispaly_8_inch::Dispaly_8_inch()
{
  cout<<"Dispaly_8_inch constructor called"<<endl;
  m_phone=nullptr;
  this->init();

}
Dispaly_8_inch::~Dispaly_8_inch()
{
  cout<<"Dispaly_8_inch destructor called"<<endl;
   delete m_phone;
}
void Dispaly_8_inch::init()
{
    cout<<"Dispaly_8_inch init called"<<endl;
    if(m_phone==nullptr){
    m_phone=new PhoneFunction;
    }
}

void Dispaly_8_inch::print()
{
   cout<<"Dispaly_8_inch print called"<<endl;
}
