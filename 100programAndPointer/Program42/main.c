//C Program to accept values into 3 dimensional array and print
#include <stdio.h>

int main(int argc, char *argv[])
{
    int number[2][2][2];
    printf("Enter the 2x2x2 number\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                scanf("%d",&number[i][j][k]);
            }
        }
    }
    printf("print the 3 matrixs\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                printf("%d",number[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}
