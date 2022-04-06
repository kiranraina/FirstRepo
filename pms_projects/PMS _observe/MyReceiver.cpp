#include "MyReceiver.h"

MyReceiver::MyReceiver()
{
cout<<"MyReceiver constructor"<<endl;
m_sender=new MySender;
}
MyReceiver::~MyReceiver()
{
cout<<"MyReceiver destructor"<<endl;
}
bool MyReceiver::print()
{
cout<<"MyReceiver print called"<<endl;
}

bool MyReceiver::init()
{
cout<<"MyReceiver print called"<<endl;
}
bool MyReceiver::recvData()
{
cout<<"MyReceiver recvData called"<<endl;
}
