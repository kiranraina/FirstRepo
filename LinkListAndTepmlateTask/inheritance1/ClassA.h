#ifndef CLASSA_H
#define CLASSA_H
#include<iostream>
#include<ClassB.h>
#include<ClassC.h>
#include<ClassD.h>
#include<Base.h>
using namespace std;


class ClassA
{
public:
    ClassA();
    ClassB *b2;
    ClassC *c2;
    ClassD *d2;
    Base *bptr[3];
    void set(){
        cout<<"set fun"<<endl;
        b2->display();
        c2->display();
        d2->display();
        for(int i=0;i<3;i++){
            bptr[i]->display();

        }
    }

};

#endif // CLASSA_H
