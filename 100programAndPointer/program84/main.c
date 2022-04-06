//C Program to accept two numbers and print the sum of given two numbers by using pointers
#include <stdio.h>

int main(int argc, char *argv[])
{
    int num1,num2,total=0,*p;
    p=&total;
    printf("Enter the two numbers\n");
    scanf("%d %d",&num1,&num2);
    total=num1+num2;
    printf("tha sum of two number=%d\n",*p);
    return 0;
}
