#ifndef HDMI_H
#define HDMI_H
#include "CommonUtils.h"
#include "Connector.h"
#include "MyDevice.h"

class HDMI : public Connector
{
public:
    HDMI();
    ~HDMI();
    void takeData(int x);
    void giveData(int x);

};

#endif // HDMI_H
