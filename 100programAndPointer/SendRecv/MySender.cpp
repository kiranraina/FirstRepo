#include "MySender.h"
#include "MyReceiver.h"

MySender::MySender()
{
cout<<"mysender constructor"<<endl;
}
MySender::~MySender()
{
cout<<"mysender destructor"<<endl;
}
MySender::MySender(MyReciver *r)
{
cout<<"mysender myrec "<<endl;
m_r=r;
}
void MySender::print()
{
cout<<"mysender print"<<endl;
}
void MySender::init()
{
cout<<"mysender init"<<endl;
}
bool MySender::start(MyReceiver *r)
{
    cout<<"mysender start parameter called"<<endl;
     r->recvData();
    return true;
}

bool MySender::start()
{
cout<<"mysender start called"<<endl;
//m_recvdata=new MyReceiver;
// m_r=new MyReceiver;
 m_r->recvData();
return true;
}
bool MySender::publishData()
{
cout<<"mysender publishData called"<<endl;
}
