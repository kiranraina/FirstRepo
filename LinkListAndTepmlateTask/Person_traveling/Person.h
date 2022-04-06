#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<Vehicle.h>
using namespace std;

class Person
{
public:
    Person();
    void move(Vehicle *veh);
private:
    Vehicle *m_recvVehicle;
};



#endif // PERSON_H
