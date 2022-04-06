#include <iostream>
#include<Switch.h>
#include<Light.h>
#include<Fans.h>

using namespace std;

int main(int argc, char *argv[])
{
    //    Light Lights;
    //    Fans fan;
    Switch switch1;
    for(int i=0;i<10;i++){
        if(i<3){
            Fans *fan=new Fans;
            bool refan=switch1.registerWithMeForData(fan);
            if(refan==true){
                cout<<"Register fan success***********"<<endl;
            }
            else{
                cout<<"Register  fanfail"<<endl;
            }
            Light *Lights=new Light;
            bool relight=switch1.registerWithMeForData(Lights);
            if(relight==true){
                cout<<"Register light success##########"<<endl;
            }
            else{
                cout<<"Register  light fail"<<endl;
            }
        }
        else{
            Light *Lights=new Light;
            bool relight=switch1.registerWithMeForData(Lights);
            if(relight==true){
                cout<<"Register light success##########"<<endl;
            }
            else{
                cout<<"Register  light fail"<<endl;
            }
        }

    }
    switch1.startCollectingData();
    cout << "Main fun!" << endl;
    return 0;
}
