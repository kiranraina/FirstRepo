#include "Patmonitor.h"
Patmonitor* Patmonitor::self=nullptr;

Patmonitor::Patmonitor()
{
  cout<<"Patmonitor constructor"<<endl;
}
//Patmonitor::~Patmonitor()
//{
//    cout<<"Patmonitor destructor"<<endl;
//}

Patmonitor *Patmonitor::getSelf()
{
    cout<<"Patmonitor getSelf"<<endl;
    if(self==nullptr)
       self=new Patmonitor;
    return self;
}

void Patmonitor::setSelf(Patmonitor *value)
{
self=value;
}

