//C Program to print 4 dimentional matrix with constant number.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int const a[2][2][2][2];/*b[4][4][4],c[4][4][4]*/
    printf("Enter the 4x4x4 number\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                scanf("%d",&a[i][j][k][l]);
               }
            }
        }
    }
//    printf("print the 4 matrixs\n");
//    for(int i=0;i<4;i++){
//        for(int j=0;j<4;j++){
//            for(int k=0;k<4;k++){
//                c[i][j][k]=a[i][j][k]-b[i][j][k];
//            }
//        }
//    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                for(int l=0;l<2;l++){
                printf("%d\n",a[i][j][k][l]);
                }
                 printf("\n");
            }

        }
    }
    return 0;
}

