#ifndef ECGSENSOR_H
#define ECGSENSOR_H
#include "ECGHardware.h"
#include <iostream>
#include "SenorDataGet.h"
using namespace std;

namespace Device {
class ECGSensor
{

public:
      ECGSensor();
    ECGSensor(ECGHardware *r);
     ~ECGSensor();
    bool Registerhardwarewithsensor(SenorDataGet *ptr);
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
    SenorDataGet *m_datareciver[10];
     int m_howManyRegistered;

};
}

#endif // ECGSENSOR_H
