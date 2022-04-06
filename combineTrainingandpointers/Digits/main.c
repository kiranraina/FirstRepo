//C Program to print Individual Digits
#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    while(number>0)
    {
        int rem=number%10;
        printf("the enter number =%d\n",rem);
        number=number/10;
    }

    return 0;
}
