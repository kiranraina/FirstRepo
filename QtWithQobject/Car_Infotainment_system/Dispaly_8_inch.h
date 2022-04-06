#ifndef DISPALY_8_INCH_H
#define DISPALY_8_INCH_H
#include<Commanutiles.h>
#include<DisplayHardware.h>
#include<PhoneFunction.h>

class Dispaly_8_inch:public DisplayHardware
{
public:
    Dispaly_8_inch();
    ~Dispaly_8_inch();
    void init();
    void print();
private:
    PhoneFunction *m_phone;
};

#endif // DISPALY_8_INCH_H
