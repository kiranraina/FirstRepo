#ifndef ECGSYSTEM_H
#define ECGSYSTEM_H
#include "ECGLead.h"
#include"HardwareDataget.h"
#include"PMSLL.h"
#include <iostream>
#include<device_layer/ECGHardware.h>

using namespace std;
using namespace Device;
class ECGSystem:public HardwareDataget
{
public:
    ECGSystem();
     void TakeData(int val);
    ~ECGSystem();
    void operator=(const ECGSystem& Ecgsys);
    ECGSystem(const ECGSystem& Ecgsys);
    bool init();
    bool print();

    bool connect2HW(Device::ECGHardware *h);
    bool disconnect();
private:
    ECGLead *m_ecgLead;
    PMSLL<ECGLead>*m_LeadList;
    Device::ECGHardware *m_ecgHw;
};

#endif // ECGSYSTEM_H
