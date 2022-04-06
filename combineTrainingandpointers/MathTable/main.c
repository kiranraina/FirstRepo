// C Program to accept a number and print mathematical table of the given no.
#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number value\n");
    scanf("%d",&number);
    for(int i=1;i<=10;i++)
    {
         printf("%dx%d=%d\n",number,i,number*i);
    }
}
