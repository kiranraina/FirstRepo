#ifndef ECGHARDWARE_H
#define ECGHARDWARE_H
#include"CommonUtils.h"

class ECGHardware:public INeedData
{
public:
    ECGHardware();
     void takedata(int x);
};

#endif // ECGHARDWARE_H
