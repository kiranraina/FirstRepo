#ifndef USB_H
#define USB_H
#include<CommanUtiles.h>
class Laptop;
class USB : public Device
{
public:
    USB();
    void PrintData();
private:
    Laptop *m_lpU;
};

#endif // USB_H
