//C Program to accept two numbers and print the sum of given two numbers by using pointers
#include <stdio.h>
void sum(int*,int*);
int main(int argc, char *argv[])
{
    int a,b;
    printf("Enter the a and b value\n");
    scanf("%d %d",&a,&b);
    sum(&a,&b);
    return 0;
}
void sum(int *i, int *j){
    int total;

   total=*i+*j;
   printf("sum of given numbers=%d\n",total);
}
