#ifndef DISPLAY_12_INCH_H
#define DISPLAY_12_INCH_H
#include<Commanutiles.h>
#include<DisplayHardware.h>
#include<PhoneFunction.h>
#include<Navigation.h>
#include<Media.h>
#include<ClimateControl.h>
#include<VehicleInfo.h>

class Display_12_inch:public DisplayHardware
{
public:
    Display_12_inch();
    ~Display_12_inch();
    void init();
    void print();
private:
    PhoneFunction *m_phonefun;
    Navigation *m_navigation;
    Media *m_media;
    ClimateControl *m_climate;
    VehicleInfo *m_vehicle;

};

#endif // DISPLAY_12_INCH_H
