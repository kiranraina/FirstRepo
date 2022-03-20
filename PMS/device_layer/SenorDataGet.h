#ifndef SENORDATAGET_H
#define SENORDATAGET_H
#include<iostream>
using namespace std;

class SenorDataGet
{
public:
    SenorDataGet();
    ~SenorDataGet();
    virtual void ReceiveData(int val);
};

#endif // SENORDATAGET_H
