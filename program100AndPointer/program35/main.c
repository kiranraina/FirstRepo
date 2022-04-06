//C Program to accept two numbers and print sum of two numbers by using functions
#include <stdio.h>
void Add(int,int);
int main(int argc, char *argv[])
{
    int num1,num2;
    printf("Enter the two interger value\n");
    scanf("%d\n %d",&num1,&num2);
    Add(num1,num2);
    return 0;
}
void Add(int a,int b){
    int c;
    c=a+b;
    printf("sum of two number=%d\n",c);
}
