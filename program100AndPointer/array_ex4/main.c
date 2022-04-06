#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[3][3][2]={
        {
            1,2,
            3,4,
            5,6
        },
        {

            3,4,
            1,2,
            5,6
        },
        {

            3,4,
            5,6,
            1,2
        }
    };
//    printf("\n %d %d %d",*(*(a[0]+2)+1),*(*(*(a+2)+1)+1),*(a[1][2]+1));
    printf("%u %u\n",a,&a);
    printf("%u %u\n",a+1,&a+1);
    printf("%u %u\n",a+2,&a+2);
    printf("%u %u\n",a[0],&a[0]);
    printf("%u %u\n",a[1],&a[1]);
    printf("%u %u\n",a[2],&a[2]);
    printf("%u %u\n",a[0][0],&a[0][0]);
    printf("%u %u\n",a[0][1],&a[0][1]);
    printf("%u %u\n",a[0][2],&a[0][2]);
     printf("%u %u\n",a[1][0],&a[1][0]);
      printf("%u %u\n",a[1][1],&a[1][1]);
       printf("%u %u\n",a[1][2],&a[1][2]);
        printf("%u %u\n",a[2][0],&a[2][0]);
         printf("%u %u\n",a[2][1],&a[2][1]);
         printf("%u %u\n",a[2][2],&a[2][2]);
     printf("%u %u\n",a[0][0][0],&a[0][0][0]);
     printf("%u %u\n",a[0][0][1],&a[0][0][1]);
     printf("%u %u\n",a[0][1][0],&a[0][1][0]);
     printf("%u %u\n",a[0][1][1],&a[0][1][1]);
     printf("%u %u\n",a[0][2][0],&a[0][2][0]);
      printf("%u %u\n",a[0][2][1],&a[0][2][1]);
     printf("%u %u\n",a[1][0][0],&a[1][0][0]);
     printf("%u %u\n",a[1][0][1],&a[1][0][1]);
     printf("%u %u\n",a[1][1][0],&a[1][1][0]);
     printf("%u %u\n",a[1][1][1],&a[1][1][1]);
     printf("%u %u\n",a[1][2][0],&a[1][2][0]);
     printf("%u %u\n",a[1][2][1],&a[1][2][1]);
     printf("%u %u\n",a[2][0][0],&a[2][0][0]);
     printf("%u %u\n",a[2][0][1],&a[2][0][1]);
     printf("%u %u\n",a[2][1][0],&a[2][1][0]);
     printf("%u %u\n",a[2][1][1],&a[2][1][1]);
     printf("%u %u\n",a[2][2][0],&a[2][2][0]);
     printf("%u %u\n",a[2][2][1],&a[2][2][1]);
//      printf("%u %u\n",a[0][0]+1,a[2]+1);
//       printf("%u %u\n",a[0][0]+1,a[2]+1+1);
    return 0;
}
