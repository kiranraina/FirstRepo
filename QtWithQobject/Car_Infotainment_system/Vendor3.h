#ifndef VENDOR3_H
#define VENDOR3_H
#include<Commanutiles.h>
#include<INeedVendor.h>
#include<DisplayHardware.h>
#include<AudioHardWare.h>
class Vendor3 : public INeedVendor
{
public:
    Vendor3();
    ~Vendor3();
    void init();
    void print();
private:
    DisplayHardware *m_displayhw;
    AudioHardWare *m_audiohw;
};

#endif // VENDOR3_H
