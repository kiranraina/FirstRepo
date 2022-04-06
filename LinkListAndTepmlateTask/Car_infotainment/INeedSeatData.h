#ifndef INEEDSEATDATA_H
#define INEEDSEATDATA_H
#include"Commanutiles.h"


class INeedSeatData
{
public:
    INeedSeatData();
     virtual ~INeedSeatData();
    virtual void RecvSeatKinetics(int x,bool kinetics);
    virtual void RecvLumbarPad(int x,int Lumber);
     virtual void RecvShoulders(int x,int shoulder);
     virtual void RecvSeatPositionting(int x,int position);
     virtual void RecvSeatBolsters(int x,int bolster);
};

#endif // INEEDSEATDATA_H
