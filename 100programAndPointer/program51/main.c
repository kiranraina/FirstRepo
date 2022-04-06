//C Program to print “PASCAL TRIANGLE” ProcessII.
#include <stdio.h>

int main()
{
    int row,sum=1;
    printf("Enter number of rows\n");
    scanf("%d",&row);
    for(int i=0;i<row;i++)
    {
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int x=0;x<=i;x++)
        {
            if(x==0 || i==0){
                sum = 1;
            }
            else
            {
                sum = sum * (i - x + 1)/x;
            }
            printf("%d",sum);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
