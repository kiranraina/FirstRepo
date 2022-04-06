#ifndef ETHERNET_H
#define ETHERNET_H
#include<CommanUtiles.h>
class Laptop;
class Ethernet : public Device
{
public:
    Ethernet();
    void PrintData();
private:
    Laptop *m_lp;
};

#endif // ETHERNET_H
