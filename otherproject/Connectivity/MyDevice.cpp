#include "MyDevice.h"

MyDevice::MyDevice()
{
cout<<"MyDevice constructor"<<endl;
}

MyDevice::~MyDevice()
{
cout<<"MyDevice destructor"<<endl;
}

void MyDevice::sendData()
{
cout<<"MyDevice send data"<<endl;
}

void MyDevice::receiveData(int x)
{
cout<<"MyDevice received data is "<<x<<endl;
}
