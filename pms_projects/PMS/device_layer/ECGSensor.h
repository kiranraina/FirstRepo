#ifndef ECGSENSOR_H
#define ECGSENSOR_H
#include "ECGHardware.h"
#include <iostream>
using namespace std;

namespace Device {
class ECGSensor
{
     ECGSensor();
public:
    ECGSensor(ECGHardware *r);
     ~ECGSensor();
    void operator=(const ECGSensor& Es);
    ECGSensor(const ECGSensor& Es);
    void print();
    void init();
    bool start();
    bool startCollectingData();
    bool stop();
//    bool start(ECGHardware *r);
    bool publishData();
private:
    ECGHardware *m_hw;
    int m_sen;

};
}

#endif // ECGSENSOR_H
