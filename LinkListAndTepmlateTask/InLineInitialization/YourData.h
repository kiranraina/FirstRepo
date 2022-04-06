#ifndef YOURDATA_H
#define YOURDATA_H
#include<iostream>
using namespace std;
#include<MyData.h>
#include<Address.h>

class YourData:public MyData
{
public:
    YourData();  //5000
    ~YourData(); //6000
    void display();

private:
    Address *m_add;

};

#endif // YOURDATA_H
