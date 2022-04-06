#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "MyDate.h"
#include "ECGSystem.h"
#include "DeviceLayer/ECGHardware.h"
#include "myLinkedList.h"

using namespace std;
using namespace Device;


class Person
{


public:
    Person();

    bool intit();
    bool Print();
    bool initECG();
    bool registerECGHardware(ECGHardware *h);
    bool unregisterECGHardware();

    int getId() const;
    void setId(const int id);

    ~Person();

private:
    int m_Id;
    MyDate *m_date;
    ECGSystem *m_system;
    ECGHardware *m_ecgHardware;

};

#endif // PERSON_H
