#include "MyDevice.h"

MyDevice::MyDevice()
{
  cout<<"MyDevice constructor called"<<endl;
}
MyDevice::MyDevice(int x,int y):m_x(x),
    m_y(y)
{
  cout<<"MyDevice parameter constructor called"<<endl;
  cout<<"X:"<<m_x<<endl;
  cout<<"Y:"<<m_y<<endl;
}
MyDevice::~MyDevice()
{
  cout<<"MyDevice destructor called"<<endl;
}
void MyDevice::print()
{
  cout<<"MyDevice print called"<<endl;
}
void MyDevice::init()
{
   cout<<"MyDevice init called"<<endl;
}
MyDevice::MyDevice(const MyDevice &D)
{
   cout<<"MyDevice copy constructor  called"<<endl;
   this->m_x=D.m_x;
   this->m_y=D.m_y;
   cout<<"copy X:"<<this->m_x<<endl;
   cout<<"copy Y:"<<this->m_y<<endl;
}

int MyDevice::GetX()const
{
    cout<<"MyDevice Getx called"<<endl;
    return m_x;
}
void MyDevice::SetX(const int x)
{
    cout<<"MyDevice setx called"<<endl;
    m_x=x;
}
int MyDevice::GetY()const
{
    cout<<"MyDevice Gety called"<<endl;
    return m_x;
}
void MyDevice::SetY(const int y)
{
    cout<<"MyDevice sety called"<<endl;
    m_x=y;
}
