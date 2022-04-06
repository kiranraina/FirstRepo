#ifndef RS232_H
#define RS232_H
#include<CommanUtiles.h>
class Laptop;
class RS232 : public Device
{
public:
    RS232();
    void PrintData();
private:
    Laptop *m_lpR;
};

#endif // RS232_H
