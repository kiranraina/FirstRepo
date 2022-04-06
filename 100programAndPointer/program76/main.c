/*C Program to print the following series until there sum exceeds 2.6 term value exceeds 1.5
x+x2/2!+x3/3!+------------.*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int iterate,c;
    float value,sum,no_row;
    printf("Enter the value\n");
    scanf("%f",&value);
    printf("Enter the iterate\n");
    scanf("%d",&iterate);
    sum =1;no_row=1;
    for(c=1;c<iterate;c++)
    {
        no_row =no_row*(value/c);
        sum =sum+ no_row;
    }
  printf("the sum of series=%f\n",sum);
    return 0;
}
