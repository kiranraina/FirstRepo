#ifndef ECGSENSOR_H
#define ECGSENSOR_H
#include"CommonUtils.h"

class ECGSensor
{
public:
    ECGSensor();
    bool registerWithForData(INeedData *ptr);
    bool startCollectingData();
private:
    INeedData *m_dataReciever[10];
    int m_howManyRegistered;
};

#endif // ECGSENSOR_H
