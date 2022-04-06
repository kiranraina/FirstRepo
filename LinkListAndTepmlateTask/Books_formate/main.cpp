#include <iostream>
#include"Books.h"
using namespace std;

int main(int argc, char *argv[])
{
//    Books b(1);
    Books b1(1,2);
//    Books b2(1,2,3);
//    Books b3(1,2,3,4);
    b1.save();
    b1.read();
    cout << "main function!" << endl;
    return 0;
}
