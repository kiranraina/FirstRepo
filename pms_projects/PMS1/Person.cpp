#include "Person.h"

Person::Person()
{

}
void Person::initECG(){
    m_system=new ECGSystem;
}
string Person::getName()const{
    return m_name;
}
void Person::setName(const int name){
    this->m_name=name;
}


int Person:: getAge()const{
    return m_age;
}
void Person:: setAge(const int age){
    this->m_age=age;
}

string Person:: getMobile()const{
    return m_mobile;
}
void Person::setMobile(const int mobile){
    this->m_mobile=mobile;
}

//string Person:: getGender()const{
//    return m_gender;
//}
//void Person::setGender(const string gender){
//    this->m_gender=gender;
//}

MyDate Person::getDate()const{
    return m_date;
}
void Person::setDate(const MyDate date){
    this->m_date=date;
}
bool Person::print(){

}
