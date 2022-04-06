#include "GoogleAuthentication.h"

GoogleAuthentication::GoogleAuthentication()
{
   cout<<"GoogleAuthentication construtor called"<<endl;
}
GoogleAuthentication::~GoogleAuthentication()
{
   cout<<"GoogleAuthentication destrutor called"<<endl;
}
bool GoogleAuthentication::verify(string u, string p){
    cout<<"GoogleAuthentication verify called"<<u<<p<<endl;
}

