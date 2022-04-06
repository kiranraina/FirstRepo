#include "INeedTyreData.h"
INeedTyreData::INeedTyreData()
{
  cout<<"INeedTyreData constructor called"<<endl;
}
INeedTyreData::~INeedTyreData()
{
  cout<<"INeedTyreData destructor called"<<endl;
}

void INeedTyreData::RecvAirPressure(int x, int airpressure)
{
    cout<<"INeedTyreData RecvAirPressure called"<<x<<airpressure<<endl;
}

void INeedTyreData::Recvwheel(int x, bool wheel)
{
    cout<<"INeedTyreData Recvwheel called"<<x<<wheel<<endl;
}

void INeedTyreData::Recvairleakage(int x, bool airleakage)
{
    cout<<"INeedTyreData Recvairleakage called"<<x<<airleakage<<endl;
}

void INeedTyreData::RecvtypeUsage(int x, int tyreUsage)
{
    cout<<"INeedTyreData RecvtypeUsage called"<<x<<tyreUsage<<endl;
}
