#ifndef MYRECEIVER_H
#define MYRECEIVER_H
#include<iostream>
#include<MySender.h>
using namespace std;

class MyReceiver
{
public:
    MyReceiver();
     ~MyReceiver();
    void print();
    void init();
    bool recvData();
private:
    MySender *m_sender;

};

#endif // MYRECEIVER_H
