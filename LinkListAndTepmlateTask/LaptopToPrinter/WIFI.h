#ifndef WIFI_H
#define WIFI_H
#include"CommonInConnector.h"

class WIFI : public Connector
{
public:
    WIFI();
    ~WIFI();
    void SendData();
    void ReceiveData();
};

#endif // WIFI_H
