#ifndef LINKEDINAUTHENTICATION_H
#define LINKEDINAUTHENTICATION_H
#include"Authentications.h"
#include<iostream>
using namespace std;
class LinkedInAuthentication : public Authentications
{
public:
    LinkedInAuthentication();
    ~LinkedInAuthentication();
    bool verify(string u, string p)override;
};

#endif // LINKEDINAUTHENTICATION_H
