#include "Tv.h"

Tv::Tv()
{
 cout<<"TV constructor called"<<endl;
}
Tv::~Tv()
{
 cout<<"TV destructor called"<<endl;
}
string Tv::getname()const{
    cout<<"Tv getname called"<<endl;
    return m_name;
}
void Tv::setname(const string name){
     cout<<"Tv setname called"<<endl;
     m_name=name;
}
string Tv::getdisplaysize()const{
    cout<<"Tv getdisplaysize called"<<endl;
    return m_displaysize;
}
void Tv::setdisplaysize(const string displaysize){
     cout<<"Tv setdisplaysize called"<<endl;
     m_displaysize=displaysize;
}
string Tv::gettype()const{
    cout<<"Tv gettype called"<<endl;
    return m_type;
}
void Tv::settype(const string type){
     cout<<"Tv settype called"<<endl;
     m_type=type;
}
float Tv::getprice()const{
    cout<<"Tv getprice called"<<endl;
    return m_price;
}
void Tv::setprice(const float price){
     cout<<"Tv setprice called"<<endl;
     m_price=price;
}
float Tv::getweight()const{
    cout<<"Tv getweight called"<<endl;
    return m_weight;
}
void Tv::setweight(const float weight){
     cout<<"Tv setweight called"<<endl;
     m_weight=weight;
}
bool Tv::print()
{
  cout<<"Tv print called"<<endl;
  return true;
}
bool Tv::init()
{
  cout<<"Tv init called"<<endl;
  return true;
}
