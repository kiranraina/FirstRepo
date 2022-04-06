#include "Person.h"

Person::Person()
{
cout<<"Person constructor called"<<endl;
}
void Person::move(Vehicle *veh)
{
   cout<<"Person move called"<<endl;
   m_recvVehicle=veh;
   m_recvVehicle->Move();

}
