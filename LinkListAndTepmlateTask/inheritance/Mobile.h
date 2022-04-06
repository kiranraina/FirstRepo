#ifndef MOBILE_H
#define MOBILE_H
#include<iostream>
using namespace std;

class Mobile
{
public:
    Mobile();
    ~Mobile();
    bool init();
    bool print();
public:
    string m_name;
    string m_size;
    string m_price;
    string m_color;
};

#endif // MOBILE_H
