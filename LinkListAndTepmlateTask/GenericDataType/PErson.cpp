#include "PErson.h"

PErson::PErson()
{
cout<<"PErson constructor called"<<endl;
}
PErson::~PErson()
{
    cout<<"PErson destructor called"<<endl;
}

void PErson::operator<(const PErson &p)
{
     cout<<"PErson operator called"<<endl;
}
