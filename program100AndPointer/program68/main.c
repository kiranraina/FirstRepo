//C Program to print a diagonal matrix.

#include <stdio.h>

int main(int argc, char *argv[])
{
    int array[3][3];
    printf("enter 3x3 matric data\n");
   for(int i=0;i<3;i++)
   {
        for(int j=0;j<3;j++){
            scanf("%d",&array[i][j]);
        }

   }
   printf("print........\n");
   for(int i=0;i<3;i++)
   {
        for(int j=0;j<3;j++){
           if(i==j)
           {
                printf("%d ",array[i][j]);
           }else{
                printf("  ");
           }
        }
        printf("\n");

   }
    return 0;
}
