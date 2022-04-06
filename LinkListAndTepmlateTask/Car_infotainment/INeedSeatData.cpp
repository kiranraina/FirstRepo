#include "INeedSeatData.h"

INeedSeatData::INeedSeatData()
{
  cout<<"INeedSeatData constructor called"<<endl;
}
INeedSeatData::~INeedSeatData()
{
  cout<<"INeedSeatData constructor called"<<endl;
}
void INeedSeatData::RecvSeatKinetics(int x, bool kinetics){

     cout<<"INeedSeatData RecvSeatKinetics called"<<x<<kinetics<<endl;
}
void INeedSeatData::RecvLumbarPad(int x,int Lumber ){

    cout<<"INeedSeatData RecvSeatKinetics called"<<x<<Lumber<<endl;
}

void INeedSeatData::RecvShoulders(int x, int shoulder)
{
    cout<<"INeedSeatData RecvSeatKinetics called"<<x<<shoulder<<endl;
}

void INeedSeatData::RecvSeatPositionting(int x, int position)
{
    cout<<"INeedSeatData RecvSeatKinetics called"<<x<<position<<endl;
}

void INeedSeatData::RecvSeatBolsters(int x, int bolster)
{
     cout<<"INeedSeatData RecvSeatKinetics called"<<x<<bolster<<endl;
}

