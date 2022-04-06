#include "CAR.h"

CAR::CAR()
{
  cout<<"CAR constructor called"<<endl;
}
CAR::~CAR()
{
  cout<<"CAR destructor called"<<endl;
}
string CAR::getchassisNumber() const
{
    cout<<"CAR getchassisNumber called"<<endl;
    return m_chassisNumber;
}

void CAR::setChassisNumber(const string chassisNumber)
{
    cout<<"CAR setchassisNumber called"<<endl;
    m_chassisNumber = chassisNumber;
}

string CAR::getVarient() const
{
    cout<<"CAR getVarient called"<<endl;
    return m_varient;
}

void CAR::setVarient(const string varient)
{
    cout<<"CAR setVarient called"<<endl;
    m_varient = varient;
}
void CAR::init()
{
    cout<<"CAR init called"<<endl;
}

void CAR::print()
{
    cout<<"CAR print called"<<endl;
}
