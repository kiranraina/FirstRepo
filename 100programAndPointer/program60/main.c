//C Program to fibanocci of matrix
#include <stdio.h>

int main(int argc, char *argv[])
{
int array[2][2],m;

    printf("Enter the 2x2 matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        scanf("%d",&array[i][j]);
      }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        m=array[i][j];
        int a=0,b=1,c;
         printf("%d%d",a,b);
        for(int i=2;i<=m;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d",b);
        }
        printf("\n");
      }
    }
    return 0;
}
