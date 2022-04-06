#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<Book.h>
using namespace std;

class Person
{
public:
    Person();
    Person(const Person &p1);
    ~Person();
    bool print();
    bool init();

    string getname() const;
    void setName(const string name);

    int getage() const;
    void setAge(int age);

    string getaddress() const;
    void setAddress(const string address);

    string getoccupation() const;
    void setOccupation(const string occupation);

    float getincome() const;
    void setIncome(float income);

private:
    string m_name;
    int m_age;
    string m_address;
    string m_occupation;
    float m_income;
    Book *book1;
};

#endif // PERSON_H
