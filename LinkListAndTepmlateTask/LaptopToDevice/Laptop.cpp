#include "Laptop.h"

Laptop::Laptop()
{
 cout<<"Laptop constructor called"<<endl;
 initPriniter();
}
void Laptop::takedata(int x)
{
    cout<<"Laptop or derived-Data recv takedata"<<x<<endl;
}
void Laptop::start()
{
    cout<<"Laptop start called"<<endl;
    for(int i=0;i<3;i++){
        m_printer[i]->registerWithForData(this);
        m_printer[i]->startCollectingData(i);
    }
}
void Laptop::initPriniter()
{
    cout<<"Laptop initprinter called"<<endl;
    for(int i=0;i<3;i++){
        m_printer[i]=new Printer;
    }
}

