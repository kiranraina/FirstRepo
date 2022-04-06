#ifndef PATIENTMONITORSYSTEM_H
#define PATIENTMONITORSYSTEM_H
#include<iostream>
#include "Address.h"
#include "Person.h"
#include "device_layer/ECGHardware.h"
#include "PMSLL.h"
#include "map"
using namespace std;
//helps to access the ecghardware and echSensor from device layer
using namespace Device;

class PatientMonitorSystem
{
//     PatientMonitorSystem(int x,int y);
    using PERSON_ID=int;
public:
    PatientMonitorSystem();
    bool init();
    bool inputPersonDetails();
    bool initECGForPerson();
    bool print();  
    bool initECGHardware();
    ~PatientMonitorSystem();
//    static PatientMonitorSystem *getSelf();
//    static void setSelf(PatientMonitorSystem *value);

private:

    string m_hospitalName;
    Address *m_address;
    string m_phone;
    string m_licenseNumber;
    int m_wards;
//    PMSLL<Person>*m_personList;
    PMSLL<ECGHardware>*m_ECGHardwareList;
//    Person **m_pat;
    Person *m_pat;
    ECGHardware *m_ecgHardwares;
      int curent_Patient;
      std::map<PERSON_ID,Person*> *m_personMap;

//      static PatientMonitorSystem *self;
};

#endif // PATIENTMONITORSYSTEM_H
