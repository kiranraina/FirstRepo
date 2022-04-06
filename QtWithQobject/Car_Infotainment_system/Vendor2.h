#ifndef VENDOR2_H
#define VENDOR2_H
#include<Commanutiles.h>
#include<INeedVendor.h>
#include<DisplayHardware.h>
#include<AudioHardWare.h>
class Vendor2 : public INeedVendor
{
public:
    Vendor2();
     ~Vendor2();
    void init();
    void print();
private:
    DisplayHardware *m_displayhw;
    AudioHardWare *m_audiohw;
};

#endif // VENDOR2_H
