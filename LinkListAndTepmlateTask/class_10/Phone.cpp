#include "Phone.h"

Phone::Phone()
{
  cout<<"phone constructor called"<<endl;
}
Phone::~Phone()
{
  cout<<"phone destructor called"<<endl;
}
void Phone::operator=(const Phone &ph)
{
      cout<<"phone operator called"<<endl;
   m_displaysize=ph.m_displaysize;
}

string Phone::getname()const{
    cout<<"phone getname called"<<endl;
    return m_name;
}
void Phone::setname(const string name){
     cout<<"phone setname called"<<endl;
     m_name=name;
}
string Phone::getdisplaysize()const{
    cout<<"phone getdisplaysize called"<<endl;
    return m_displaysize;
}
void Phone::setdisplaysize(const string displaysize){
     cout<<"phone setdisplaysize called"<<endl;
     m_displaysize=displaysize;
}
string Phone::gettype()const{
    cout<<"phone gettype called"<<endl;
    return m_type;
}
void Phone::settype(const string type){
     cout<<"phone settype called"<<endl;
     m_type=type;
}
string Phone::getos()const{
    cout<<"phone getos called"<<endl;
    return m_os;
}
void Phone::setos(const string os){
     cout<<"phone setos called"<<endl;
     m_os=os;
}
float Phone::getprice()const{
    cout<<"phone getprice called"<<endl;
    return m_price;
}
void Phone::setprice(const float price){
     cout<<"phone setprice called"<<endl;
     m_price=price;
}
bool Phone::print()
{
  cout<<"phone print called"<<endl;
  return true;
}
bool Phone::init()
{
  cout<<"phone init called"<<endl;
  return true;
}

