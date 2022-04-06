#include <iostream>
#include "TestAddress.h"
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    TestAddress *testAddress = new TestAddress;
    testAddress->print();
    cout << "**********************" << endl;
    int *add =nullptr;
    add=(int*)(testAddress);
    *add=1000;
    add++;
    *add =2000;
    add++;
    *add=3000;
    cout<<"******************"<<endl;
    testAddress->print();
    cout<<"******************"<<endl;
    return 0;
}
