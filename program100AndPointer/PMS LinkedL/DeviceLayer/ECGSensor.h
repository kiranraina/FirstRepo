#ifndef ECGSENSOR_H
#define ECGSENSOR_H
#include <iostream>
#include "ECGHardware.h"
using namespace std;
namespace Device{

class ECGSensor
{ ECGSensor();
public:

    ECGSensor (ECGHardware *r);
    ECGSensor(const ECGSensor& sensor);
    bool print();
    void init();
    bool start();

    bool registerWithMe(INeedData *iNeedData);

    bool startCollectingData();
    bool stop();

    void operator=(const ECGSensor& sensor);

    ~ECGSensor();

    int getX() const;
    void setX(int X);

private:
    ECGHardware *m_reciver;
    INeedData *m_dataRec;
    int m_x;

};
}
#endif // ECGSENSOR_H
