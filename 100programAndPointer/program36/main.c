//C Program to accept a number and find factorial of given number
#include <stdio.h>

int main(int argc, char *argv[])
{
    int fact=1,num;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num>0)
    {
       fact*=num;
       num--;
    }
  printf("the factorial of given number=%d\n",fact);

    return 0;
}
