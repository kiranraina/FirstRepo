#include <iostream>
#include "HDMI.h"
#include "Bluetooth.h"
#include "Ethernet.h"
#include "RS232.h"
#include "USB.h"
#include "Wifi.h"

#include "MyLaptop.h"

#include "DotPrinter.h"
#include "InkPrinter.h"
#include "LaserPrinter.h"
#include "ThermalPrinter.h"
#include "Connector.h"

using namespace std;

int main()
{
    MyLaptop mylappy;
    HDMI hdmi;
//    Connector connector;
    InkPrinter inkPrinter;

    mylappy.registerForData(&hdmi);
    hdmi.registerForData(&inkPrinter);
    mylappy.sendData();

    cout<<"*******************************************************"<<endl;
//    Wifi wifi;
//    LaserPrinter laser;
//    mylappy.registerForData(&wifi);
//    wifi.registerForData(&laser);
//    mylappy.sendData();

    return 0;
}
