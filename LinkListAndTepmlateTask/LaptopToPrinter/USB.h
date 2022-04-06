#ifndef USB_H
#define USB_H
#include"CommonInConnector.h"

class USB : public Connector
{
public:
    USB();
    ~USB();
    void SendData();
    void ReceiveData();
};

#endif // USB_H
