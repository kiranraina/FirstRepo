#ifndef WIFI_H
#define WIFI_H
#include<CommanUtiles.h>
class Laptop;
class WIFI : public Device
{
public:
    WIFI();
    void PrintData();
private:
    Laptop *m_lpW;
};

#endif // WIFI_H
