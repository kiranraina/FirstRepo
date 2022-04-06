#include "SeatModel.h"
SeatModel* SeatModel::m_seatmodel1=nullptr;
SeatModel::SeatModel()
{
    cout<<"SeatModel constructor called"<<endl;
    this->initSeat();
}
SeatModel::~SeatModel()
{
    cout<<"SeatModel destructor called"<<endl;

    delete m_seats[4];
     cout<<"m_seats[4] destructor called"<<endl;
   delete m_seats[3];
    cout<<"m_seats[3] destructor called"<<endl;
   delete m_seats[2];
     cout<<"m_seats[2] destructor called"<<endl;
   delete m_seats[1];
      cout<<"m_seats[1] destructor called"<<endl;
   delete m_seats[0];
      cout<<"m_seats[0] destructor called"<<endl;
}
SeatModel* SeatModel::instanceSeat()
{
      cout<<"TyreModel gettyremodel called"  <<endl;
      if(m_seatmodel1==nullptr){
          m_seatmodel1=new SeatModel;
          return m_seatmodel1;
      }
}
void SeatModel::RecvSeatKinetics(int x, bool kinetics){

    cout<<"SeatModel RecvSeatKinetics called"<<x<<kinetics<<endl;
}
void SeatModel::RecvLumbarPad(int x,int Lumber ){

    cout<<"SeatModel RecvSeatKinetics called"<<x<<Lumber<<endl;
}

void SeatModel::RecvShoulders(int x, int shoulder)
{
    cout<<"SeatModel RecvSeatKinetics called"<<x<<shoulder<<endl;
}

void SeatModel::RecvSeatPositionting(int x, int position)
{
    cout<<"SeatModel RecvSeatKinetics called"<<x<<position<<endl;
}

void SeatModel::RecvSeatBolsters(int x, int bolster)
{
    cout<<"SeatModel RecvSeatKinetics called"<<x<<bolster<<endl;
}

void SeatModel::start()
{
    cout<<"SeatModel start called"<<endl;
    for(int i=0;i<5;i++)
    {
        m_seats[i]->StartCollectingSeatData(i+1);

    }
}

void SeatModel::initSeat()
{
     cout<<"SeatModel initSeat called"<<endl;
     m_seats[0]=new Seat(1,true,4,5,7,2);
     m_seats[0]->RegisterSeatWithMe(this);

     m_seats[1]=new Seat(2,false,2,6,3,8);
     m_seats[1]->RegisterSeatWithMe(this);

     m_seats[2]=new Seat(3,true,4,9,4,3);
     m_seats[2]->RegisterSeatWithMe(this);

     m_seats[3]=new Seat(4,false,5,4,6,9);
     m_seats[3]->RegisterSeatWithMe(this);

     m_seats[4]=new Seat(5,true,6,1,7,9);
     m_seats[4]->RegisterSeatWithMe(this);

}
