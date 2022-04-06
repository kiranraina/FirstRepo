// C Program to print 1 to 10 mathematical tables.
#include <stdio.h>

int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
         printf("%dx%d=%d\n",i,j,i*j);
        }
        printf("******************************\n");
    }
}
