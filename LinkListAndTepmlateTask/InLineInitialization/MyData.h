#ifndef MYDATA_H
#define MYDATA_H
#include<iostream>
using namespace std;
#include"Address.h"

class MyData
{
public:
    MyData();  //1000
      MyData(int x,int y,string name); //2000
   ~MyData(); //3000

    void init();
    void print();
    void display();  //4000
private:
    int m_x=10;  //8000
    int m_y;
    string m_name;
    Address *m_address;
};

#endif // MYDATA_H
