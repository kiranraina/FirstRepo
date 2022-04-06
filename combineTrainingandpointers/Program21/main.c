//C Program to find biggest of two no by using ternary numbers
#include <stdio.h>

int main()
{
    int num1,num2,max;
    printf("Enter the two integer number\n");
    scanf("%d\n %d",&num1,&num2);
    max=(num1>num2)?num1:num2;
    printf("The max number is=%d\n",max);
    return 0;
}
