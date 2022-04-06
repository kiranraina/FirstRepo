#ifndef GOOGLEAUTHENTICATION_H
#define GOOGLEAUTHENTICATION_H
#include<Authentications.h>
#include<iostream>
using namespace std;

class GoogleAuthentication : public Authentications
{
public:
    GoogleAuthentication();
    ~GoogleAuthentication();
     bool verify(string u, string p)override;
};

#endif // GOOGLEAUTHENTICATION_H
