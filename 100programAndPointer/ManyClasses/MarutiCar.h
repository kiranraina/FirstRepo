#ifndef MARUTICAR_H
#define MARUTICAR_H
#include <Vehicle.h>
#include <iostream>
//#include<QString>
using namespace std;
class MarutiCar:public Vehicle
{
public:
    MarutiCar();
    ~MarutiCar();
    void move(){ //0x200571

        std::cout<<"MarutiCar move"<<endl;
    }
private:
    string m_color;
    string m_version;
    string m_carNo;
    string m_carType;
//    string m_capacity;
//    string m_fuelTank;
//    int  m_wheels;

};

#endif // MARUTICAR_H
