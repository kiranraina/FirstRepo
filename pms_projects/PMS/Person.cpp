#include "Person.h"

Person::Person()
{
    cout<<"person constructor called"<<endl;
    init();
}
Person::~Person()
{
    cout<<"person destructor called"<<endl;

}
bool Person::init()
{
  cout<<"person init called "<<endl;
  cout<<"Enter the person name"<<endl;
  cin>>m_name;

  cout<<"Enter the person age"<<endl;
  cin>>m_age;


  cout<<"Enter the person mobile number"<<endl;
  cin>>m_mobile;

  cout<<"Enter the person gender "<<endl;
  cin>>m_gender;

  m_date=new MyDate;
  print();
}

void Person::initECG(){
    cout<<"Person initECG called"<<endl;
    m_system=new ECGSystem;
}
string Person::getName()const{
    cout<<"Person getName called"<<endl;
    return m_name;
}
void Person::setName(const string name){
     cout<<"Person setName called"<<endl;
    this->m_name=name;
}


int Person:: getAge()const{
    cout<<"Person getAge called"<<endl;
    return m_age;
}
void Person:: setAge(const int age){
    cout<<"Person setAge called"<<endl;
    this->m_age=age;
}

int Person:: getMobile()const{
    cout<<"Person getMobile called"<<endl;
    return m_mobile;
}
void Person::setMobile(const int mobile){
      cout<<"Person setMobile called"<<endl;
    this->m_mobile=mobile;
}

string Person:: getGender()const{
      cout<<"Person getGender called"<<endl;
    return m_gender;
}
void Person::setGender(const string gender){
     cout<<"Person setGender called"<<endl;
    this->m_gender=gender;
}


bool Person::print(){
cout<<"person print called"<<endl;
cout<<"person name  "<<m_name<<endl;
cout<<"person age  "<<m_age<<endl;
cout<<"person mobile  "<<m_mobile<<endl;
cout<<"person gender  "<<m_gender<<endl;


}
bool Person::RegisterECGHardware(Device::ECGHardware *h){
    cout<<"RegisterECGHardware function"<<endl;
    m_ecgHardware=h;
    m_ecgHardware->setstatus(true);
     return true;
}
bool Person::UnregisterECGHardware(){
    cout<<"UnregisterECGHardware function"<<endl;
    m_ecgHardware->setstatus(false);
   m_ecgHardware=nullptr;
    return true;
}

