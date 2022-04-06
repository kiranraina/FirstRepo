#include "MyData.h"

MyData::MyData():m_x(1),
                 m_y(10),
                 m_name("hello"),
                 m_address(nullptr)
{
cout<<"MyData constructor called "<<endl;
//this->print();
}
MyData::MyData(int x,int y,string name):m_x(x),
                 m_y(y),
                 m_name(name)

{
cout<<"MyData constructor called "<<endl;
//this->print();
}
MyData::~MyData()
{
    cout<<"MyData destructor called "<<endl;
    delete m_address;
}

void MyData::init()
{
    cout<<"MyData init called "<<endl;
    this->m_x=3;
    this->m_y=7;
    this->m_name="kiran";
    m_address=new Address;
}

void MyData::print()
{
     cout<<"MyData print called "<<endl;
     cout<<"m_x"<<m_x<<endl;
     cout<<"m_x"<<m_y<<endl;
     cout<<"m_name"<<m_name<<endl;
     cout<<"m_address"<<m_address<<endl;
}
void MyData::display(){
    cout<<" base mydata display called"<<endl;
}
