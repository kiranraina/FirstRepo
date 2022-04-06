#include <stdio.h>

int main()
{
    int num,b=97;
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
    return 0;
}
