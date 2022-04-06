#include <stdio.h>

int main(int argc, char *argv[])
{
    int array[5];

    printf("Enter the five value!\n");
    for(int i=0;i<5;i++){
    scanf("%d",&array[i]);
    }
    printf("print the value use pointer\n");
    for(int i=0;i<5;i++){
    printf("%d\n",*(array+i));
    }
    return 0;
}
