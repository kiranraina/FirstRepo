#include "MySender.h"

MySender::MySender()
{
cout<<"mysender constructor"<<endl;
}
MySender::~MySender()
{
cout<<"mysender destructor"<<endl;
}
bool MySender::print()
{
cout<<"mysender print"<<endl;
}
bool MySender::init()
{
cout<<"mysender init"<<endl;
}
bool MySender::start()
{
cout<<"mysender start called"<<endl;
//m_recvdata=new MyReceiver;
MyReceiver *r=new MyReceiver;
r->recvData();
}
bool MySender::publishData()
{
cout<<"mysender publishData called"<<endl;
}
