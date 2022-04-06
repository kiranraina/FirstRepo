#include <iostream>
#include "Person.h"
#include "Superphone.h"

using namespace std;

int main()
{
    Person person1;
    person1.setName("Bahubali");
    person1.setGender("male");

    string Name=person1.getName();

    cout<<"Name is"<<Name<<endl;

    Phone phone1;
    SuperPhone phone2;
    phone2.setBrand("Samsung");
    phone2.setColor("white");
    person1.addPhone(&phone2);
    phone1.addFeatures("sam","raghu");
    phone2.Videocall();
    phone2.sendMessage();
    phone2.addFeatures("hello","raj");


    return 0;
}
