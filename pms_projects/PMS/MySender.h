#ifndef MYSENDER_H
#define MYSENDER_H
#include"MyReceiver.h"
#include<iostream>
using namespace std;

class MySender
{
public:
    MySender();
     ~MySender();
    void print();
    void init();

    bool start();
    bool publishData();
private:
    MyReceiver *m_recvdata;

};

#endif // MYSENDER_H
