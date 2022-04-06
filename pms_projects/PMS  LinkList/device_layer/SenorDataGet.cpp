#include "SenorDataGet.h"

SenorDataGet::SenorDataGet()
{
    cout<<"SenorDataGet constructor called"<<endl;
}

SenorDataGet::~SenorDataGet()
{
    cout<<"SenorDataGet destructor called"<<endl;
}
void SenorDataGet::ReceiveData(int val)
{
  cout<<"SenorDataGet base ReceiveData called"<<val<<endl;
}
