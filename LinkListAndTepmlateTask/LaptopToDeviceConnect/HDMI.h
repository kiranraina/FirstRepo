#ifndef HDMI_H
#define HDMI_H
#include"CommanUtiles.h"
class Laptop;
class HDMI : public Device
{
public:
    HDMI();
    void PrintData();
private:
    Laptop *m_lph;
};

#endif // HDMI_H
