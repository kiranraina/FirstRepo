//C Program to print sum of the natural numbers from 1 to 10.
#include <stdio.h>

int main()
{
    int sum=0;
   for(int i=1;i<=10;i++)
   {
        sum+=i;
        printf("The sum of natural =%d\n",sum);
   }
    return 0;
}
