#include <iostream>
#include<BenzTruck.h>
#include<Vehicle.h>
#include<MarutiCar.h>
using namespace std;

int main(int argc, char *argv[])
{
    MarutiCar *mr=new MarutiCar;
    BenzTruck *tr= new BenzTruck;
    tr->move();//0x200111
    Vehicle *vh = new Vehicle;
    vh->move();//0x4000
    int x=0;
    cout<<"enter value"<<endl;
//    cin>>x;
    if(x==1){
        vh=tr;
    }
    else{
        vh=mr;
    }
    vh->move();
//  (*vh).move();
    return 0;
}
