#include "Display_12_inch.h"

Display_12_inch::Display_12_inch()
{
  cout<<"Display_12_inch constructor called"<<endl;
  this->init();
  m_phonefun=nullptr;
  m_navigation=nullptr;
  m_media=nullptr;
  m_climate=nullptr;
  m_vehicle=nullptr;
}
Display_12_inch::~Display_12_inch()
{
  cout<<"Display_12_inch destructor called"<<endl;
  if(m_phonefun!=nullptr){
  delete m_phonefun;
      cout<<"m_phonefun destructor called"<<endl;
  }
  if(m_navigation!=nullptr){
  delete m_navigation;
  cout<<"m_navigation destructor called"<<endl;
  }
  if(m_media!=nullptr){
  delete m_media;
  cout<<"m_media destructor called"<<endl;
  }
  if(m_climate!=nullptr){
  delete m_climate;
  cout<<"m_climate destructor called"<<endl;
  }
  if(m_vehicle!=nullptr){
  delete m_vehicle;
  cout<<"m_vehicle destructor called"<<endl;
  }
}
void Display_12_inch::init()
{
    cout<<"Display_12_inch init called"<<endl;
    if(m_phonefun==nullptr){
    m_phonefun=new PhoneFunction;
    }
    if(m_navigation==nullptr){
    m_navigation=new Navigation;
    }
    if(m_media==nullptr){
    m_media=new Media;
    }
    if(m_climate==nullptr){
    m_climate=new ClimateControl;
    }
    if(m_vehicle==nullptr){
    m_vehicle=new VehicleInfo;
    }
}

void Display_12_inch::print()
{
   cout<<"Display_12_inch print called"<<endl;
}
