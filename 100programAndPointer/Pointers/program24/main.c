#include <stdio.h>

int main(int argc, char *argv[])
{
  int year;
  printf("Enter the a value\n");
  scanf("%d",&year);
  (year%4==0)?printf("The  number is leap year =%d\n",year):printf("The  number is not leap year =%d\n",year);
    return 0;
}
