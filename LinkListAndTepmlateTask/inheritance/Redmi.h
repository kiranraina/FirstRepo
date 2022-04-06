#ifndef REDMI_H
#define REDMI_H
#include<iostream>
#include<Mobile.h>
using namespace std;

class Redmi:public Mobile
{
public:
    Redmi();
    ~Redmi();
private:
    string m_os;
    string m_model;

};

#endif // REDMI_H
