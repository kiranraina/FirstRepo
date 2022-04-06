#ifndef RS232_H
#define RS232_H
#include"CommonInConnector.h"

class RS232 : public Connector
{
public:
    RS232();
    ~RS232();
    void SendData();
    void ReceiveData();
};

#endif // RS232_H
