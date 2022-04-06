#ifndef PERSON_H
#define PERSON_H
#include<iostream>
using namespace std;

class PErson
{
public:
    PErson();
    ~PErson();
    void operator<(const PErson &p);
};

#endif // PERSON_H
