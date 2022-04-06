#include "YourData.h"

YourData::YourData()
{
    cout<<" YourData-derived constructor called"<<endl;
    m_add=new Address;
}
YourData::~YourData()
{
    cout<<"YourData-derived destructor called"<<endl;
    delete m_add;
}
void YourData::display(){
    cout<<" derived mydata display called"<<endl;
}
