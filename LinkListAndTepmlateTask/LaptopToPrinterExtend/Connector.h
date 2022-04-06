#ifndef CONNECTOR_H
#define CONNECTOR_H
#include<iostream>
#include<Device.h>
using namespace std;

class Connector
{
public:
    Connector();
     ~Connector();
 virtual void SendData(int x);
     bool RegisterDevicewithMe(Device *dev);
  virtual  void ReceiveData(int x);

private:
    Device *m_device;
};

#endif // CONNECTOR_H
