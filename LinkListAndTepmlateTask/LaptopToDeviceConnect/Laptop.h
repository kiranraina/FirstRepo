#ifndef LAPTOP_H
#define LAPTOP_H
#include<iostream>
#include<Device.h>
#include"Bluetooth.h"
#include"Ethernet.h"
#include"HDMI.h"
#include"RS232.h"
#include"USB.h"
#include"WIFI.h"
using namespace std;

class Laptop
{
public:
    Laptop(int x);
    void SendData();
    void ReciveData(string data);
private:
  Device *m_type;
};

#endif // LAPTOP_H
