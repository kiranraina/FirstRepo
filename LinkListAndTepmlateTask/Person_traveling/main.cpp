#include <iostream>
#include<iostream>
#include<Person.h>
#include<Bike.h>
#include<Bus.h>
#include<Walk.h>
#include<Auto.h>
#include<Vehicle.h>
using namespace std;

int main(int argc, char *argv[])
{
    Bike *b=new Bike;
    for(int i=0;i<10;i++){
        Person *p=new Person;
        p->move(b);
    }
    cout << "Hello World!" << endl;
    return 0;
}
