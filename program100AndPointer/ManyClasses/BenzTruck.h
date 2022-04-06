#ifndef BENZTRUCK_H
#define BENZTRUCK_H

#include <iostream>
#include "Vehicle.h"
//#include<QString>
using namespace std;
class BenzTruck:public Vehicle
{
public:
    BenzTruck();
    ~BenzTruck();
    void move(){ //0x200111
//        Vehicle::move();
        std::cout<<"benz move"<<endl;
    }
private:
string m_fuelTank;
int m_Wheels;
string m_carrier;
bool m_lifter;
};

#endif // BENZTRUCK_H
