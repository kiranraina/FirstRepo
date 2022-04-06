#include <stdio.h>


int main(int argc, char *argv[])
{
  int a[3][4]={
  {1,2,3,4},
  {5,6,7,8},
  {9,0,1,6},
  };

  display(a,3,4);
  show(a,3,4);
  print(a,3,4);
  printf("%d\n",a[][2]);
//  printf("%u\n",&a);
//  printf("%u\n",a);
//  printf("%u\n",a[0]);
//  printf("%d\n",*a[0]);
//  printf("%u\n",&a[0]);
//  printf("%u\n",a[1]);
//  printf("%u\n",&a[1]);
//  printf("%u\n",a[2]);
//  printf("%u\n",&a[2]);
    return 0;
}
display(int *q,int row,int col){
    int i,j;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("%d",*(q+i*col+j));

        }
        printf("\n");
    }
    printf("\n");
}

show(int(*q)[4],int row,int col){
    int i,j;
    int *p;
    for(int i=0;i<row;i++)
    {
        p=q+i;
        for(int j=0;j<col;j++)
        {
           printf("%d",*(p+j));

        }
        printf("\n");
    }
    printf("\n");
}

print(int q[][4],int row,int col){
    int i,j;

    for(int i=0;i<row;i++)
    {/+
        for(int j=0;j<col;j++)
        {
           printf("%d",q[i][j]);

        }
        printf("\n");
    }
    printf("\n");
}
