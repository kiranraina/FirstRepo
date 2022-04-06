//.C Program to find whether a square matrix is a) symmetric b) skew symmetric c) none of two.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int array[3][3],key=0,count=0;

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
            if(array[i][j]==array[j][i])
            {
                count++;
            }
         }

    }
    for(int i=0;i<3;i++)
    {
         for(int j=0;j<3;j++){
            if(array[i][j]==-array[j][i]||-array[i][j]==array[j][i])
            {
                key++;
            }
         }

    }


    if(count==9){

        printf("matrix is symmetric matric\n");

    }else if(key==9){

        printf("matrix is skew symmetric matric\n");

    }else{

        printf("matrix is none  symmatric and skew symmetric matric\n");

    }

    return 0;
}
