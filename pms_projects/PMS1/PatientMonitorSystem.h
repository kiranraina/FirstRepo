#ifndef PATIENTMONITORSYSTEM_H
#define PATIENTMONITORSYSTEM_H
#include<iostream>
#include <Address.h>
#include "Person.h"
using namespace std;

class PatientMonitorSystem
{
public:
    PatientMonitorSystem();
    PatientMonitorSystem(int x,int y);

    bool init();
    bool addPerson(Person *p);
    bool addPerson(Person p1);
    bool inputPersonDetails();
    bool print();
    bool initECGForPerson();

//    string getHospitalName()const;
//    void setHospitalName(const int hospital);
    ~PatientMonitorSystem();
private:
    int curent_Patient;
    string m_hospitalName;
    Address *m_address;
    string m_phone;
    string m_licenseNumber;
    int m_wards;
//    Person *m_patient[100];
    Person **m_pat;
    Person ***m_pat1;
};

#endif // PATIENTMONITORSYSTEM_H
