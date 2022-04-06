#include "ECHManger.h"

ECHManger::ECHManger()
{
cout<<"ECHManger constructor"<<endl;
init();
}
ECHManger::ECHManger(int x,int y,int z)
{
cout<<"ECHManger constructor parameter "<<endl;
m_x=x;
m_y=y;
m_z=z;
//print();
}
ECHManger::~ECHManger()
{
cout<<"ECHManger destructor"<<endl;
}
bool ECHManger::print()
{
cout<<"ECHManger print called"<<endl;
cout<<"X="<<m_x<<endl;
cout<<"Y="<<m_y<<endl;
cout<<"Z="<<m_z<<endl;
m_lib.print();
return true;
}
ECHManger::init()
{
cout<<"ECHManger init called"<<endl;
m_x=100;
m_y=200;
m_z=300;
//print();
}
void ECHManger::assignLibrary(){
    MyLibarary lib1;
    m_lib=lib1;
}
