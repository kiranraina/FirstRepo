//C Program to accept a year and check whether the given year is leap year or not.
#include <stdio.h>

int main()
{
   int Leap;
   printf("Enter the year\n");
   scanf("%d",&Leap);
   if(Leap%4==0)
   {
     printf("The Year is leap year=%d\n",Leap);
   }
   else
   {
     printf("The Year is not leap year=%d\n",Leap);
   }
    return 0;
}
