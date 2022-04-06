#include "Person.h"

Person::Person()
{
   cout<<"Person constructor called"<<endl;
   init();
   book1=new Book;
}

Person::Person(const Person &p1)
{
    cout<<"Person copy-constructor called"<<endl;
     book1=new Book;
     *book1 = *(p1.book1);
}
Person::~Person()
{
   cout<<"Person destructor called"<<endl;
}

string Person::getname() const
{
    cout<<"Person getname called"<<endl;
    return m_name;
}

void Person::setName(const string name)
{
    cout<<"Person setname called"<<endl;
    m_name = name;
}

int Person::getage() const
{
     cout<<"Person getage called"<<endl;
    return m_age;
}

void Person::setAge(int age)
{
     cout<<"Person setage called"<<endl;
    m_age = age;
}

string Person::getaddress() const
{
     cout<<"Person getaddress called"<<endl;
    return m_address;
}

void Person::setAddress(const string address)
{
     cout<<"Person setaddress called"<<endl;
    m_address = address;
}

string Person::getoccupation() const
{
     cout<<"Person getoccupation called"<<endl;
    return m_occupation;
}

void Person::setOccupation(const string occupation)
{
     cout<<"Person setOccupation called"<<endl;
    m_occupation = occupation;
}

float Person::getincome() const
{
    cout<<"Person getincome called"<<endl;
    return m_income;
}

void Person::setIncome(float income)
{
     cout<<"Person setincome called"<<endl;
    m_income = income;
}
bool Person::print()
{
 cout<<"Person print called"<<endl;
 return true;
}
bool Person::init()
{
 cout<<"Person init called"<<endl;
 m_name="raj";
 m_age=25;
 m_address="123 rr nagar";
 m_occupation="agriculture";
 m_income=20000.00;
 return true;
}
