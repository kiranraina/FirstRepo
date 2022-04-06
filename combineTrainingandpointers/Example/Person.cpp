#include "Person.h"

Person::Person()
{

}
void Person::setName(string name)
{
    m_name = name;
}

string Person::getName()
{
    return m_name;
}

int Person::getAge()
{
    return m_age;
}

void Person::setAge(int age)
{
    m_age = age;
}

string Person::getDOB()
{
    return m_DOB;
}

void Person::setDOB(const string &DOB)
{
    m_DOB = DOB;
}

string Person::getGender()
{
    return m_gender;
}

void Person::setGender(const string &gender)
{
    m_gender = gender;
}
void Person::addPhone(Phone *phone){
    m_phone[m_phonecount]=phone;
    cout<<"Phone added is:"<<m_phone[m_phonecount]->brand()<<endl;
    m_phonecount++;
}
Person::~Person()
{

}
