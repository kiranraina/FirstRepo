#include "MyLaptop.h"

MyLaptop::MyLaptop()
{
cout<<"Laptop constructor"<<endl;
}

MyLaptop::~MyLaptop()
{
cout<<"Laptop destructor"<<endl;
}

void MyLaptop::sendData()
{
    cout<<"laptop send data"<<endl;
m_connector->takeData(12);
}

void MyLaptop::receiveData(int x)
{
cout<<"Laptop receive data"<<endl;
}

bool MyLaptop::registerForData(Connector *ptr)
{
    cout<<"laptop register data"<<endl;
    this->m_connector = ptr;
    return true;
}
