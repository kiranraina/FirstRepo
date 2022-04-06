#include <iostream>
#include<Base.h>
using namespace std;

int main(int argc, char *argv[])
{
    Base *b=new Base;
    b->setName("kiran");
    Base *b1=new Base;
    b1->setName("kumar");
    Base *b2=new Base;
    b2->setName("king");
    b->children(b1);
    cout << "Hello World!" << endl;
    return 0;
}
