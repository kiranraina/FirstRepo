#include "MyDate.h"

MyDate::MyDate()
{
    cout<<"mydate constructor called"<<endl;
    init();
}
MyDate::~MyDate()
{
    cout<<"mydate Destructor called"<<endl;

}

int MyDate::getDay()const{
     cout<<"mydate getDay called"<<endl;
    return m_day;
}
void MyDate:: setDay(const int day){
    cout<<"mydate setDay called"<<endl;
    this->m_day=day;
}

string MyDate::getMonth()const{
    cout<<"mydate getMonth called"<<endl;
    return m_month;
}
void MyDate:: setMonth(const string month){
    cout<<"mydate setMonth called"<<endl;
    this->m_month=month;
}

int MyDate::getYear()const{
    cout<<"mydate getYear called"<<endl;
    return m_year;
}
void MyDate::setYear(const int year){
    cout<<"mydate setYear called"<<endl;
    this->m_year=year;
}

bool MyDate::print(){
   cout<<"mydate print called"<<endl;
    cout<<"mydate of birth called"<<endl;
   cout<<"Day "<<m_day<<endl;
   cout<<"Month "<<m_month<<endl;
   cout<<"Year "<<m_year<<endl;
}
bool MyDate::init(){
   cout<<"mydate init called"<<endl;
   cout<<"Enter the day"<<endl;
   cin>>m_day;
   cout<<"Enter the month"<<endl;
   cin>>m_month;
   cout<<"Enter the year"<<endl;
   cin>>m_year;
   print();
}
