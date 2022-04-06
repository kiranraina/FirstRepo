#include <iostream>
#include<Laptop.h>
using namespace std;

int main(int argc, char *argv[])
{
    Laptop lap1(1);
    lap1.SendData();
    cout << "Hello World!" << endl;
    return 0;
}
