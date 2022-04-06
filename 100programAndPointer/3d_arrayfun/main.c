#include <stdio.h>

int main(int argc, char *argv[])
{
  int a[2][3][4]={
      {
          {1,2,3,4},
          {5,6,7,8},
          {9,0,1,6}
      },
      {
          {2,3,5,7},
          {4,3,9,2},
          {1,6,3,6}
      }

  };

  display(a,2,3,4);
  show(a,2,3,4);
  print(a,2,3,4);
    return 0;
}
display(int *q,int ii, int jj,int kk){
    int i,j,k;
    for(int i=0;i<ii;i++)
    {
        for(int j=0;j<jj;j++)
        {
            for(int k=0;k<kk;k++)
                  printf("%d",*(q+i*jj*kk+j*kk+k));

             printf("\n");
        }
        printf("\n");
    }
    printf("\n");
}

show(int(*q)[3][4],int ii, int jj,int kk){
    int i,j,k;
    int *p;
    for(int i=0;i<ii;i++)
    {

        for(int j=0;j<jj;j++)
        {
            p=q[i][j];
            for(int k=0;k<kk;k++){
                printf("%d",*(p+k));
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
}

print(int q[][3][4],int ii, int jj,int kk){
    int i,j,k;

    for(int i=0;i<ii;i++)
    {
        for(int j=0;j<jj;j++)
        {
            for(int k=0;k<kk;k++)
            {
               printf("%d",q[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
}
