#include<stdio.h>
#include<string.h>
int main( )
{
    struct address
    {
        char phone[10];
        char city[10];
        int pin;
    };
    struct emp{
        char name[20];
        struct address a;
    };
    struct emp e={"hello","67899","banglore",20};

    printf("name=%s phone=%s\n",e.name,e.a.phone);
//    struct employee e1={"Sanjay",30,5500.50};
//    struct employee e2,e3 ;
//    /* piece-meal copying */
//     printf("hello");
//    strcpy (e2.name,e1.name);
//    /* e2.name = e1. name is wrong */
//    e2.age=e1.age ;
//    e2.salary=e1.salary ;
//    /* copying all elements at one go */
//    e3=e2 ;
//    printf ("%s %d %f\n", e1.name, e1.age, e1.salary ) ;
//    printf ("%s %d %f\n", e2.name, e2.age, e2.salary ) ;
//    printf ("%s %d %f\n", e3.name, e3.age, e3.salary ) ;
    return 0 ;
}
