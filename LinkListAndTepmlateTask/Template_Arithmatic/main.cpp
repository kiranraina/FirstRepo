#include <iostream>
#include<ArthmeticTemplate.h>
using namespace std;

int main(int argc, char *argv[])
{
    ArthmeticTemplate<int,int> arthe;
    arthe.Subtraction(2,4);
    arthe.Addition(3,6);
    arthe.Multiplication(4,8);
    arthe.Division(50,10);
     ArthmeticTemplate<float,float> arthe1;
    arthe1.Subtraction(2.9,4.7);
    arthe1.Addition(3.7,6.8);
    arthe1.Multiplication(4.5,8.5);
    arthe1.Division(50.98,10.34);
    ArthmeticTemplate<double,double> arthe2;
   arthe2.Subtraction(2.9876,4.7765);
   arthe2.Addition(3.7776654,6.887654);
   arthe2.Multiplication(4.58765,8.578765);
   arthe2.Division(50.9865,10.34765);

    cout << "Hello World!" << endl;
    return 0;
}
