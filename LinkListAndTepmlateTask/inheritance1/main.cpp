#include <iostream>
#include <ClassA.h>
#include<ClassB.h>
#include<ClassC.h>
#include<ClassD.h>
#include<Base.h>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    ClassA a1;
    ClassB b1;
    ClassC c1;
    ClassD d1;
    a1.b2=&b1;
    a1.c2=&c1;
    a1.d2=&d1;
    //a1.set();
//    a1.bptr[0]=&b1;
//    a1.bptr[1]=&c1;
//    a1.bptr[2]=&d1;
    a1.set();
    return 0;
}
