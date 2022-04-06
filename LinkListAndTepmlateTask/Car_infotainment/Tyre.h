#ifndef TYRE_H
#define TYRE_H
#include"Commanutiles.h"
#include"Device.h"
#include"INeedTyreData.h"
class Tyre : public Device
{
     Tyre();
public:

    Tyre(int a,int b,bool c,bool d,int e);
    ~Tyre();
    bool RegisterWithMe(INeedTyreData *ptr);
    bool StartCollectingData(int x);
    void SendAirPressure(int x,int air);
    void SendWheel(int x,bool wheel);
    void SendAirLeakage(int x,bool leakage);
    void SendTyreUsage(int x,int usage);

private:
    int m_identical;
    int m_usage;
    bool m_wheelAlign;
    bool m_airleakage;
    int m_airPressure;
    INeedTyreData *m_tyres;
};

#endif // TYRE_H
