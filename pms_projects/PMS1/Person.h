#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include"MyDate.h"
#include "ECGSystem.h"
using namespace std;

class Person
{
    enum GENDER{
       MALE=10,
        FEMALE,
        TRANS
    };

public:
    Person();
//    Person(int x,int y);
    bool print();
    void initECG();
    ~ Person();
    string getName()const;
    void setName(const int name);

    int getAge()const;
    void setAge(const int age);

    string getMobile()const;
    void setMobile(const int mobile);

//    string getGender()const;
//    void setGender(const string gender);

    MyDate getDate()const;
    void setDate(const MyDate date);
private:
    string m_name;
    int    m_age;
    string m_mobile;
    GENDER m_gender;
    MyDate m_date;
    ECGSystem *m_system;
};

#endif // PERSON_H
