#ifndef SEATMODEL_H
#define SEATMODEL_H
#include"Commanutiles.h"
#include"INeedSeatData.h"
#include"Seat.h"

class SeatModel : public INeedSeatData
{
    SeatModel();
public:
    ~SeatModel();
     static SeatModel* instanceSeat();
     void RecvSeatKinetics(int x,bool kinetics);
     void RecvLumbarPad(int x,int Lumber);
     void RecvShoulders(int x,int shoulder);
     void RecvSeatPositionting(int x,int position);
     void RecvSeatBolsters(int x,int bolster);
     void start();
     void initSeat();
private:
     Seat *m_seats[5];
     static SeatModel *m_seatmodel1;
};

#endif // SEATMODEL_H
