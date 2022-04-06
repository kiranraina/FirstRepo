#ifndef PERSON_H
#define PERSON_H
#include <string>
#include "Eye.h"
#include<iostream>
#include "Phone.h"
#define MAX_PHONES 10
const int max1=10;
using namespace std;


class Person
{
public:
    Person();

    void setName(string name);
    string getName();
    ~Person();
     void setGender(const string &gender);
    string getGender();


    string getDOB();
    void setDOB(const string &DOB);

    int getAge();
    void setAge(int age);

    void addPhone(Phone *phone);


private:
    string m_name,m_gender,m_DOB;
    int m_age;
    Eye m_eye[2];
    Phone *m_phone[max1];
    int m_phonecount;


};

#endif // PERSON_H
