#include <stdio.h>

int main()
{
    int num;
    printf("Enter the pyramid number");
    scanf("%d",&num);
    for(int row=num;row>=0;row--)
    {
        for(int col=0;col<=row;col++)
        {
            printf(" ");
        }
            for(int a=row;a<=num;a++){
                printf("%d",a);
                printf(" ");
            }
    printf("\n");
   }

    for(int row=0;row<=num;row++)
    {
printf(" ");
        for(int col=0;col<=row;col++)
        {
            printf(" ");
        }
            for(int a=row;a<=num-1;a++){
                printf("%d",a);
                printf(" ");
            }
    printf("\n");
   }

    return 0;
}

