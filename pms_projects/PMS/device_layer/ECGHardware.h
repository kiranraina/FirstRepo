#ifndef ECGHARDWARE_H
#define ECGHARDWARE_H
//#include "ECGSensor.h"
#include <iostream>
using namespace std;
namespace Device {
class ECGSensor;
class ECGHardware
{
public:
    ECGHardware();
     ~ECGHardware();

    void operator=(const ECGHardware& EcgHw);
    ECGHardware(const ECGHardware& EcgHw);
    bool print();
    void initSensor();
    void init();
    bool getstatus()const;
    bool setstatus(const bool status);
    bool recvData();
    bool startECGHardware();
//    bool startECGHardware(ECGHardware *ptr);
private:
  ECGSensor **m_sensors;
  bool m_status;
//  ECGSensor *m_sen;
//   ECGSensor *m_sensor;
};
}

#endif // ECGHARDWARE_H
