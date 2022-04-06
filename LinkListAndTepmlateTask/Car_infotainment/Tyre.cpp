#include "Tyre.h"

Tyre::Tyre()
{
    cout<<"Tyre constructor called"<<endl;
}

Tyre::Tyre( int a, int b, bool c, bool d, int e):m_identical(a),
      m_usage(b),
      m_wheelAlign(c),
      m_airleakage(d),
      m_airPressure(e)
{
   cout<<"Tyre parameter constructor called"<<endl;
}
Tyre::~Tyre()
{
    cout<<"Tyre destructor called"<<endl;
}

bool Tyre::RegisterWithMe(INeedTyreData *ptr)
{
   cout<<"RegisterWithMe called" <<endl;
   m_tyres=ptr;
    return true;
}

bool Tyre::StartCollectingData(int x)
{
    cout<<"StartCollectingData called" <<endl;
    this->SendAirPressure( x, m_airPressure);
    this->SendAirLeakage( x, m_airleakage);
    this->SendTyreUsage( x, m_usage);
    this->SendWheel( x, m_wheelAlign);
    return true;
}

void Tyre::SendAirPressure(int x, int air)
{
    cout<<"SendAirPressure called" <<endl;
    m_tyres->RecvAirPressure(x,air);
}

void Tyre::SendWheel(int x, bool wheel)
{
    cout<<"SendWheel called" <<endl;
    m_tyres->Recvwheel(x,wheel);
}

void Tyre::SendAirLeakage(int x, bool leakage)
{
    cout<<"SendAirLeakage called" <<endl;
    m_tyres->Recvairleakage(x,leakage);
}

void Tyre::SendTyreUsage(int x, int usage)
{
    cout<<"SendTyreUsage called" <<endl;
    m_tyres->RecvtypeUsage(x,usage);
}
