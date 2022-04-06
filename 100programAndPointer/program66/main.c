//C Program to print the floyd’s triangle.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int number,k=1;
    printf("Enter the value\n");
    scanf("%d",&number);

    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
         printf("%d ",k);
         k++;
        }
        printf("\n");
    }
    return 0;
}
