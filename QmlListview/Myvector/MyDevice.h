#ifndef MYDEVICE_H
#define MYDEVICE_H
#include<iostream>
using namespace std;

class MyDevice
{
public:
    MyDevice();
     MyDevice(int x,int y);
    ~MyDevice();

     class iterator{

     };
     string MyDevice:: tostring(){
         return"50";
     }
    MyDevice(const MyDevice &D);
    void print();
    void init();

    int GetX()const;
    void SetX(const int x);

    int GetY()const;
    void SetY(const int y);
private:
    int m_x;
    int m_y;
};

#endif // MYDEVICE_H
