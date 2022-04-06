#ifndef DISPALY_10_INCH_H
#define DISPALY_10_INCH_H
#include<Commanutiles.h>
#include<DisplayHardware.h>
#include<PhoneFunction.h>
#include<Navigation.h>
#include<Media.h>
class Dispaly_10_inch:public DisplayHardware
{
public:
    Dispaly_10_inch();
    ~Dispaly_10_inch();
    void init();
    void print();
private:
    PhoneFunction *m_phone;
    Navigation *m_navi;
    Media *m_media;
};

#endif // DISPALY_10_INCH_H
