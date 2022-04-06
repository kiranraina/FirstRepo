//C Program to print upper triangle .
#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;
    printf("Enter the  number\n");
    scanf("%d",&num);
    for(int row=0;row<=num;row++)
    {
        for(int col=0;col<=row;col++)
        {
            printf(" ");
        }
            for(int a=row;a<=num;a++){
                printf("%d",a);
            }
    printf("\n");
    }
    return 0;
}

