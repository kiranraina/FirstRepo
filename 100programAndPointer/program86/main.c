/*C Program to accept two 3 dimensional array and store subtraction of those two arrays into third
array..*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[3][3][3],b[3][3][3],c[3][3][3];
    printf("Enter the 3x3x3 number\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                scanf("%d",&a[i][j][k]);
                scanf("%d",&b[i][j][k]);

            }
        }
    }
    printf("print the 3 matrixs\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                c[i][j][k]=a[i][j][k]-b[i][j][k];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                printf("%d\n",c[i][j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}
