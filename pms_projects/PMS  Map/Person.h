#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include"MyDate.h"
#include "ECGSystem.h"
#include<device_layer/ECGHardware.h>
using namespace std;

class Person
{
//    enum GENDER{
//       MALE=10,
//        FEMALE,
//        TRANS
//    };

public:
    Person();
//    Person(int x,int y);

    ~ Person();
    string getName()const;
    void setName(const string name);

    int getAge()const;
    void setAge(const int age);

    int getMobile()const;
    void setMobile(const int mobile);

    string getGender()const;
    void setGender(const string gender);

    bool init();
    bool print();
    void initECG();

  bool RegisterECGHardware(Device::ECGHardware *h);
   bool UnregisterECGHardware();

   int getId() const;
   void setId(int id);

private:
   string m_name;
   int    m_age;
    int m_mobile;
    int m_id;
    string m_gender;
    MyDate *m_date;
    ECGSystem *m_system;
    Device::ECGHardware *m_ecgHardware=nullptr;
};

#endif // PERSON_H
