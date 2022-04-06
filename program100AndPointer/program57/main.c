//C Programs to multiply two Matrices
#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[2][2],b[2][2],c[2][2];
    printf("Enter the 2x2 number\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){         
                scanf("%d",&a[i][j]);
                scanf("%d",&b[i][j]);

        }
    }
    printf("multiply the 2 matrixs\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j]=0;
         int k=1,m=0;
                c[i][j]=a[i][m]*b[m][j]+a[i][k]*b[k][j];

        }
    }
      printf("print the 2 matrixs\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
                printf("%d\n",c[i][j]);
            }
            printf("\n");
    }
    return 0;
}
