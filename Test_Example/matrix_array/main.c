#include <stdio.h>

int main(int argc, char *argv[])
{
    int m=0,n=0,x=0,y=0;
    printf("Enter the value of row and column value martix1 order");
    scanf("%d\n %d",&m,&n);
    printf("Enter the value of row and column value martix2 order");
    scanf("%d\n %d",&x,&y);
    int max1[m][n],max2[x][y],max3[m][y];
    printf("Enter the matrix1 values to array\n");
    for(int a=0;a<m;a++){
        for(int b=0;b<n;b++){
            scanf("%d",&max1[a][b]);
        }
    }

    printf("Enter the matrix2 values to array\n");
    for(int c=0;c<x;c++){
        for(int d=0;d<y;d++){
            scanf("%d",&max2[c][d]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            max3[i][j]=0;
            for(int k=0;k<n;k++){
                max3[i][j]+=max1[i][k]*max2[k][j];

            }
        }
    }
    printf("printf matrix values details\n");
    for(int g=0;g<m;g++){
        for(int h=0;h<y;h++){
            printf("%d\t",max3[g][h]);
        }
        printf("\n");
    }
    return 0;
}
