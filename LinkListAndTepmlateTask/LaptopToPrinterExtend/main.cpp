#include <iostream>
#include<Laptop.h>
#include<HDMI.h>
#include<InkPrinter.h>
using namespace std;

int main(int argc, char *argv[])
{
    Laptop mylaptop;
    HDMI hdmi;
    InkPrinter ink;
    mylaptop.RegisterConnectwithMe(&hdmi);
    hdmi.RegisterDevicewithMe(&ink);
    mylaptop.SendData();
    cout << "Hello World!" << endl;
    return 0;
}
