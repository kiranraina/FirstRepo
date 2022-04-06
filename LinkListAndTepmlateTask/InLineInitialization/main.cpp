#include <iostream>
#include<MyData.h>
#include<YourData.h>
using namespace std;

int main(int argc, char *argv[])
{
//    MyData data;
//    YourData *d2=new YourData;
//    delete d2;
//    harish---->Base

//    Kiran* ki = new Kiran;
//    5000.2000

    MyData *baseptr;  //x100
    baseptr=new YourData;  //x200

    baseptr->display();

//    delete baseptr;
    cout << "Hello World!" << endl;
    return 0;
}
