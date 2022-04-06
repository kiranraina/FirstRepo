#include "LinkedInAuthentication.h"

LinkedInAuthentication::LinkedInAuthentication()
{
cout<<"LinkedInAuthentication constructor called"<<endl;
}
LinkedInAuthentication::~LinkedInAuthentication()
{
cout<<"LinkedInAuthentication destructor called"<<endl;
}
bool LinkedInAuthentication::verify(string u, string p){
    cout<<"LinkedInAuthentication verify called"<<u<<p<<endl;
}
