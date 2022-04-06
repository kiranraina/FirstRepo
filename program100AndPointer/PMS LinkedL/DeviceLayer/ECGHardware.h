#ifndef ECGHARDWARE_H
#define ECGHARDWARE_H
#include "myLinkedList.h"
#include "INeedData.h"
#include "INeedDataFEcgSystem.h"

#include <iostream>
using namespace std;
namespace Device{
class ECGSensor;
class ECGHardware:public INeedData
{
public:
    ECGHardware();
    bool print();
    ~ECGHardware();
    ECGHardware(const ECGHardware &ecg);
    void operator=(ECGHardware& ecgh);

    void registerWithMe(INeedDataFEcgSystem* ind);
    void initSensor();
    void reciveSenData(int x);
    bool reciveData();

    bool start();
    bool status() const;
    void setStatus(bool Status);

private:

    ECGSensor *m_sensors;
    INeedDataFEcgSystem *m_dataRecFmECGHw;
    myLinkedList<ECGSensor> *m_llEcgSensor;
    bool m_status;

};
}

#endif // ECGHARDWARE_H
