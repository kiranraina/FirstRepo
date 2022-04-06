#ifndef VENDOR1_H
#define VENDOR1_H
#include<Commanutiles.h>
#include<INeedVendor.h>
//#include<BaseVersion.h>
#include<DisplayHardware.h>
#include<AudioHardWare.h>
//class BaseVersion;
class Vendor1 : public INeedVendor
{
public:
    Vendor1();
    ~Vendor1();
    void print();
    void init();
//    bool Registerbase(BaseVersion *ptr);
private:
    DisplayHardware *m_displayhw;
    AudioHardWare *m_audiohw;
};

#endif // VENDOR1_H
