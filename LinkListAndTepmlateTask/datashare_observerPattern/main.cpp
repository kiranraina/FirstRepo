#include <iostream>
#include "ECGHardware.h"
#include "ECGSensor.h"
using namespace std;

int main(int argc, char *argv[])
{
    ECGHardware hard;
    ECGSensor sensor;
    sensor.registerWithForData(&hard);
//    sensor.registerWithForData(&hard1);
    for(int i=0;i<12;i++){
        ECGHardware *hard=new ECGHardware;
       bool reVal= sensor.registerWithForData(hard);
       if(reVal==true){
           cout<<"Register success"<<endl;
       }
       else{
          cout<<"Register fail"<<endl;
       }
    }
    sensor.startCollectingData();
    cout << "main function" << endl;
    return 0;
}
