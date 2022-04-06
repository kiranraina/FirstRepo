#include "Car.h"
Car* Car::m_car=nullptr;

Car::Car()
{
    cout<<"car Constructor called"<<endl;
    m_tyremodel=TyreModel::getTyremodel();
    m_seatmodel= SeatModel::instanceSeat();
}
Car::~Car()
{
    cout<<"car destructor called"<<
          endl;
    delete m_tyremodel;
    cout<<"m_tyremodel destroy"<<endl;
    delete m_seatmodel;
    cout<<"m_seatmodel destroy"<<endl;
//    delete m_car;
//    cout<<"m_car destroy"<<endl;
}
void Car::start(){
    cout<<"car start called"<<endl;
    m_tyremodel->start();
    m_seatmodel->start();

}

Car *Car::getMe()
{
  cout<<"Car getme called"  <<endl;
  if(m_car==nullptr){
      m_car=new Car;
      return m_car;
  }
}
