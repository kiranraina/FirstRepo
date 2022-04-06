#ifndef ECGSYSTEM_H
#define ECGSYSTEM_H

#include <myLinkedList.h>
#include "DeviceLayer/ECGHardware.h"
#include <iostream>

using namespace Device;
using namespace std;
class ECGLeads;
class ECGSystem:public INeedDataFEcgSystem
{
public:
    ECGSystem();

    void operator=(ECGSystem& ecgsys);
    bool init();
    bool print();

    void reciveData(int x);
    bool start();
    bool rcvdata();

    ECGSystem(const ECGSystem& ecgsys);

    bool connect2HW(ECGHardware *h);
    bool disconnectHW();

    ~ECGSystem();
private:
    ECGLeads *m_ecgleds;
    ECGHardware *m_ecgHW;
    myLinkedList<ECGLeads> *llistLeads;
};

#endif // ECGSYSTEM_H
