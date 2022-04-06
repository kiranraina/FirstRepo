#include "Bike.h"

Bike::Bike()
{
  cout<<"Bike constructor called"<<endl;
}
Bike::~Bike()
{
  cout<<"Bike destructor called"<<endl;
}
string Bike::getname()const{
    cout<<"Bike getname called"<<endl;
    return m_name;
}
void Bike::setname(const string name){
     cout<<"Bike setname called"<<endl;
     m_name=name;
}
string Bike::getmodel()const{
    cout<<"Bike getmodel called"<<endl;
    return m_model;
}
void Bike::setmodel(const string model){
     cout<<"Bike setmodel called"<<endl;
     m_model=model;
}
string Bike::gettype()const{
    cout<<"Bike gettype called"<<endl;
    return m_type;
}
void Bike::settype(const string type){
     cout<<"Bike settype called"<<endl;
     m_type=type;
}
string Bike::getcolor()const{
    cout<<"Bike getcolor called"<<endl;
    return m_color;
}
void Bike::setcolor(const string color){
     cout<<"Bike setcolor called"<<endl;
     m_color=color;
}
float Bike::getprice()const{
    cout<<"Bike getprice called"<<endl;
    return m_price;
}
void Bike::setprice(const float price){
     cout<<"Bike setprice called"<<endl;
     m_price=price;
}
 bool Bike::print()
{
  cout<<"Bike print called"<<endl;
  return true;
}
 bool Bike::init()
{
  cout<<"Bike init called"<<endl;
  return true;
}
