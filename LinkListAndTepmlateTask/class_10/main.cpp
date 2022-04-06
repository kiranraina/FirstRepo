#include <iostream>
#include<Person.h>
#include<Phone.h>
using namespace std;

int main(int argc, char *argv[])
{
    Person *p1=new Person;
    Person p2=*p1;

    cout << "Main cpp" << endl;
    Phone ph1;
    Phone ph2;
    ph1=ph2;
    return 0;
}
