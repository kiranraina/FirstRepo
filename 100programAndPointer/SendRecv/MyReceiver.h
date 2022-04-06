#ifndef MYRECEIVER_H
#define MYRECEIVER_H
#include<iostream>
//#include<MySender.h>
using namespace std;
class MySender;
class MyReceiver
{
public:
    MyReceiver();
    ~MyReceiver();
   void print();
   void init();
   bool recvData();
   bool start();
   bool start(MyReceiver *ptr);
private:
   MySender *m_sender;
};

#endif // MYRECEIVER_H
