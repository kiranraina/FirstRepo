#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
//#include<QString>
using namespace std;
class Vehicle
{
public:
    Vehicle();
    ~Vehicle();
  virtual void move(){ //0x4000
        std::cout<<"Vechicle move "<<endl;
    }
    virtual int move_1(int){ //0x4000
          std::cout<<"Vechicle move_1 "<<endl;
      }
    void display(){
        cout<<"Display"<<endl;
    }
protected:
    int m_driver;
private:
    string m_color;
    string m_version;
    string m_carNo;
    string m_carType;

    //*VPTR=0x5000;
    //virtual Table
    // array fun pointers
    // void (Vehicle::*fp)()=&move;
    // int (Vehicle::*fp1)(int)=&move_1;

};

#endif // VEHICLE_H
