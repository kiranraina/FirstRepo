#ifndef DISPLAYHARDWARE_H
#define DISPLAYHARDWARE_H
#include<Commanutiles.h>
#include<INeedHardware.h>

class Dispaly_8_inch;
class Dispaly_10_inch;
class Display_12_inch;
enum Display{
     DISPLAY_8INCH=1,
     DISPLAY_10INCH=2,
     DISPLAY_12INCH=3,
};
class DisplayHardware :public INeedHardware
{
protected:
    DisplayHardware();
public:
    DisplayHardware(int x);
   virtual ~DisplayHardware();
    void init();
    void print();
private:
    int m_chooseDisplay;
    Dispaly_8_inch *m_display8;
    Dispaly_10_inch *m_display10;
    Display_12_inch *m_display12;
};

#endif // DISPLAYHARDWARE_H
