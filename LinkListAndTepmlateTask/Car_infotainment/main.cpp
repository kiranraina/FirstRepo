#include <iostream>
#include<Car.h>
using namespace std;

int main(int argc, char *argv[])
{
    Car* c1=Car::getMe();
    c1->start();
    delete c1;
    cout << "Hello World!" << endl;
    return 0;
}
