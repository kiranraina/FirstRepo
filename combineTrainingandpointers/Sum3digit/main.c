//C Program to accept a three digit number and print the sum of individual digits.

#include <stdio.h>

int main()
{
    int number,rem=0,total=0;
    printf("Enter three digit number\n");
    scanf("%d",&number);
    while(number>0)
    {
        rem=number%10;
        total+=rem;
        number=number/10;
    }
    printf("the total of three digit %d",total);
    return 0;
}
