#ifndef USB_H
#define USB_H
#include "CommonUtils.h"
#include "Connector.h"
#include "MyDevice.h"
class USB : public Connector
{
public:
    USB();
    ~USB();
    void takeData(int x);
    void giveData(int x);
    bool registerForData(MyDevice *ptr);
private:
    MyDevice *m_device;
};

#endif // USB_H
