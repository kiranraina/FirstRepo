#include <stdio.h>

int main()
{
   int num,b=97,c;
    printf("Enter the pyramid number");
    scanf("%d",&num);
    for(int row=num;row>=0;row--)
    {
        for(int col=0;col<=row;col++)
        {
            printf(" ");
        }
            for(int a=row;a<=num;a++){
                printf("%c",b);
                printf(" ");
            }
    printf("\n");
    b++;
   }
    c=b-2;

    for(int row=0;row<=num;row++)
    {
printf(" ");
        for(int col=0;col<=row;col++)
        {
            printf(" ");
        }
            for(int a=row;a<=num-1;a++){
                printf("%c",c);
                printf(" ");
            }
    printf("\n");
    c--;
   }
    return 0;
}
