#ifndef PATIENTMONITORINGSYSTEM_H
#define PATIENTMONITORINGSYSTEM_H
#include <iostream>
#include "Address.h"
#include "Person.h"
#include "DeviceLayer/ECGHardware.h"
#include "myLinkedList.h"
using namespace std;
using namespace Device;
class PatientMonitoringSystem
{
public:
    PatientMonitoringSystem();
    bool init();

    bool InputPersonDetails();
    bool initECGForPerson();
    bool initECGHardware();

    bool addPerson(Person *p);
    bool Print();
    ~PatientMonitoringSystem();

private: 
    string m_HospitalName;
    Address *m_Address;
    string m_PhoneNo;
    int m_wards;
    Person *m_patient;
    int m_current_Patient;

    //scope of Devices namespace Devices::
    Device::ECGHardware *m_ecgHardwares=nullptr;
    myLinkedList<ECGHardware> *linkedList;
    myLinkedList<Person> *ll_Person;
};

#endif // PATIENTMONITORINGSYSTEM_H
