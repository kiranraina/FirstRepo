#include "TestAddress.h"

TestAddress::TestAddress()
{
     m_x=100;
     m_y=200;
     m_z=300;
}
void TestAddress::print()
{
    cout<<"X="<<&m_x;
    cout<<"Y="<<&m_y;
    cout<<"Z="<<&m_z;
    cout<<"address="<<this<<endl;
}
TestAddress::~TestAddress(){

}
string TestAddress::toString(){
    return"go-2-hell";

}
