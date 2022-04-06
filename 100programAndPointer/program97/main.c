//C Program to accept two numbers and interchange two values using functions.
#include <stdio.h>
void sum(int,int);
int main(int argc, char *argv[])
{
    int num1,num2;
    printf("Enter the two numbers\n");
    scanf("%d %d",&num1,&num2);
    sum(num1,num2);
    return 0;
}
void sum(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("print a=%d\nprint=b=%d\n",a,b);
}
