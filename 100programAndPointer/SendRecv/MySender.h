#ifndef MYSENDER_H
#define MYSENDER_H
//#include"MyReceiver.h"
#include<iostream>
using namespace std;
class MyReciver;
class MySender
{
      MySender();
public:
    MySender(MyReciver *r);

    ~MySender();
   void print();
   void init();

   bool start();
   bool start(MyReciver *r);
   bool publishData();
private:
   MyReciver *m_r;
};

#endif // MYSENDER_H
