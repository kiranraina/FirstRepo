#include "MyReceiver.h"
#include "MySender.h"

MyReceiver::MyReceiver()
{
cout<<"MyReceiver constructor"<<endl;
m_sender=new MySender(this);
}
MyReceiver::~MyReceiver()
{
cout<<"MyReceiver destructor"<<endl;
}
void MyReceiver::print()
{
cout<<"MyReceiver print called"<<endl;
}

void MyReceiver::init()
{
cout<<"MyReceiver print called"<<endl;
}
bool MyReceiver::recvData()
{
cout<<"MyReceiver recvData called"<<endl;
return true;
}
bool MyReceiver::start()
{
cout<<"MyReceiver start called"<<endl;
m_sender = new MySender(this);
m_sender->start(this);
m_sender->start();
return true;
}
bool MyReceiver::start(MyReciver *ptr)
{
cout<<"MyReceiver start called"<<endl;
m_sender = new MySender(this);
m_sender->start(ptr);
return true;
}
