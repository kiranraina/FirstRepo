#ifndef PATMONITOR_H
#define PATMONITOR_H
#include<iostream>
using namespace std;


class Patmonitor
{

//    Patmonitor(int x);
//    Patmonitor(int x,int y);
      Patmonitor();
//        ~Patmonitor();
public:


     static void getMe(){
         cout<<"Call me"<<endl;
     }
     static Patmonitor *getSelf();
     void setSelf(Patmonitor *value);
private:
   static Patmonitor *self;
   /*static*/ int x;

};

#endif // PATMONITOR_H
