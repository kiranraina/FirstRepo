#ifndef INEEDTYREDATA_H
#define INEEDTYREDATA_H
#include"Commanutiles.h"

class INeedTyreData
{
public:
    INeedTyreData();
  virtual ~INeedTyreData();
   virtual void RecvAirPressure(int x,int airpressure);
   virtual void Recvwheel(int x,bool wheel);
   virtual void Recvairleakage(int x,bool airleakage);
   virtual void RecvtypeUsage(int x,int tyreUsage);
};

#endif // INEEDTYREDATA_H
