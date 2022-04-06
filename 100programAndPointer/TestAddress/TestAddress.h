#ifndef TESTADDRESS_H
#define TESTADDRESS_H
#include<iostream>
using namespace std;

class TestAddress
{
public:
    TestAddress();
    ~TestAddress();
    void print();
    string toString();
private:
    int m_x;
    int m_y;
    int m_z;
};

#endif // TESTADDRESS_H
