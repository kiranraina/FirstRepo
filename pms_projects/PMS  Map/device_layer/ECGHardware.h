#ifndef ECGHARDWARE_H
#define ECGHARDWARE_H
//#include "ECGSensor.h"
#include"SenorDataGet.h"
#include"PMSLL.h"
#include <iostream>
#include"HardwareDataget.h"
using namespace std;
namespace Device {
class ECGSensor;
class ECGHardware :public SenorDataGet
{
public:
    ECGHardware();
     ~ECGHardware();
    void ReceiveData(int val);

    void operator=(const ECGHardware& EcgHw);
    ECGHardware(const ECGHardware& EcgHw);
    bool print();
    void initSensor();
    void init();
    bool getstatus()const;
    bool setstatus(const bool status);
    bool recvData();
    bool startECGHardware();
    bool RegisterECGSystemWithHardware(HardwareDataget *ptr);
//     bool startCollectingData();
//    bool startECGHardware(ECGHardware *ptr);
private:
  ECGSensor *m_sensors;
  PMSLL<ECGSensor>*m_sensorList;
  bool m_status=false;

  HardwareDataget *m_dataReciver;

//  ECGSensor *m_sen;
//   ECGSensor *m_sensor;
};
}

#endif // ECGHARDWARE_H
