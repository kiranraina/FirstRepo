#ifndef SEAT_H
#define SEAT_H
#include"Commanutiles.h"
#include"Device.h"
#include"INeedSeatData.h"

class Seat : public Device
{

public:
     Seat();
    Seat(int a,bool b,int c,int d,int e,int f);
     ~Seat();
    bool RegisterSeatWithMe(INeedSeatData *ptr);
    bool StartCollectingSeatData(int x);
    void SendSeatKinetics(int x,bool kinetics);
    void SendLumbarPad(int x,int Lumber);
    void SendShoulders(int x,int shoulder);
    void SendSeatPositionting(int x,int position);
    void SendSeatBolsters(int x,int bolster);
private:
    int m_identical;
    bool m_kinetics;
    int m_Lumber;
    int m_shoulder;
    int m_position;
    int m_bolster;
    INeedSeatData *m_seats;
};

#endif // SEAT_H
