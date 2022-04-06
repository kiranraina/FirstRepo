#ifndef RS232_H
#define RS232_H
#include "CommonUtils.h"
#include "Connector.h"
#include "MyDevice.h"
class RS232 : public Connector
{
public:
    RS232();
    ~RS232();
    void takeData(int x);
    void giveData(int x);
    bool registerForData(MyDevice *ptr);
private:
    MyDevice *m_device;
};

#endif // RS232_H
