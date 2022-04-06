#include <iostream>

using namespace std;
#include<iostream>
#include<Mani.h>

int main(){

    Mani m1;
     Mani m2;
    void (Mani::*fp1)(int)=&Mani::sleep;
    typedef void(Mani::*fp)(int);
    typedef void(Mani::*tk)(int,int,int);
    fp ab =&Mani::sleep;
    tk tk1=&Mani::talk;
    (m1.*ab)(20);
    (m1.*tk1)(20,40,50);
//    (*tk1(&m1,20,40,50));`

    int a = 20;
    char b = "S"

    a = b;
    Mani *m3 = new Mani;


    (m2.*ab)(20);
    (m2.*tk1)(20,40,50);
}
//namespace MY_VALUE {
//int x;
//int y;
//}
//void display(){
//    cout<<"I am here"<<endl;
//}
//void callMe(){
//    cout<<"I am callMe"<<endl;
//}
//typedef void(*fp)();
//void takeAddressofFunction(fp a1){
//    a1();
//}

//int main1()
//{
//    fp ab =display;
//    fp cd =callMe;

//    ab();
//    cd();
//    return 0;
//}
//int sum(int x, int y){
//    return x+y;
//}
//int sub(int )
//typedef int (*fp1)(int, int);
//void mathsMethod(fp1 a){
//    a(20,10);
//}
