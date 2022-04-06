#ifndef AUTHENTICATIONS_H
#define AUTHENTICATIONS_H
#include<iostream>
using namespace std;
class Authentications
{
public:
    Authentications() {}
   virtual ~Authentications() {}
    virtual bool verify(string u, string p)=0;

};
#endif // AUTHENTICATIONS_H
