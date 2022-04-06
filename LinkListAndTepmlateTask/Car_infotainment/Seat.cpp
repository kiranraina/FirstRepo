#include "Seat.h"

Seat::Seat()
{
 cout<<"Seat constructor called"<<endl;
}
Seat::~Seat()
{
    cout<<"Seat destructor called"<<endl;
}

Seat::Seat(int a, bool b, int c, int d, int e, int f):m_identical(a),
    m_kinetics(b),
    m_Lumber(c),
    m_shoulder(d),
    m_position(e),
    m_bolster(f)
{
    cout<<"Seat parameter constructor called"<<endl;
}

bool Seat::RegisterSeatWithMe(INeedSeatData *ptr)
{
    cout<<"Seat RegisterSeatWithMe  called"<<endl;
    m_seats=ptr;
    return true;
}

bool Seat::StartCollectingSeatData(int x)
{
    cout<<"Seat StartCollectingSeatData  called"<<endl;
    this->SendSeatKinetics(x,m_kinetics);
    this->SendLumbarPad(x,m_Lumber);
    this->SendShoulders(x,m_shoulder);
    this->SendSeatPositionting(x,m_position);
    this->SendSeatBolsters(x,m_bolster);
    return true;
}

void Seat::SendSeatKinetics(int x, bool kinetics)
{
    cout<<"Seat SendSeatKinetics  called"<<x<<" "<<kinetics<<endl;
    m_seats->RecvSeatKinetics(x,kinetics);
}

void Seat::SendLumbarPad(int x, int Lumber)
{
    cout<<"Seat SendLumbarPad  called"<<x<<" "<<Lumber<<endl;
    m_seats->RecvLumbarPad(x,Lumber);
}

void Seat::SendShoulders(int x, int shoulder)
{
    cout<<"Seat SendShoulders  called"<<x<<" "<<shoulder<<endl;
    m_seats->RecvShoulders(x,shoulder);
}

void Seat::SendSeatPositionting(int x, int position)
{
    cout<<"Seat SendSeatPositionting  called"<<x<<" "<<position<<endl;
    m_seats->RecvSeatPositionting(x,position);
}

void Seat::SendSeatBolsters(int x, int bolster)
{
    cout<<"Seat SendSeatBolsters  called"<<x<<" "<<bolster<<endl;
    m_seats->RecvSeatBolsters(x,bolster);
}
