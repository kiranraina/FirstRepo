#include <stdio.h>

int main(int argc, char *argv[])
{
  int a[3][3]={
             {5,7,5},
             {4,8,6},
             {6,9,9}
             };
printf("adress of &a=%u\n",&a);
printf("value of a=%u\n",a);
printf("value of a[0]=%u\n",a[0]);
printf("value of a[1]=%u\n",a[1]);
printf("value of a[2]=%u\n",a[2]);
printf("address of &a[0]=%u\n",&a[0]);
printf("address of &a[1]=%u\n",&a[1]);
printf("address of &a[2]=%u\n",&a[2]);
printf("address of &a[0][0]=%u\n",&a[0][0]);
printf("address of &a[0][1]=%u\n",&a[0][1]);
printf("address of &a[0][2]=%u\n",&a[0][2]);
printf("address of &a[1][0]=%u\n",&a[1][0]);
printf("address of &a[1][1]=%u\n",&a[1][1]);
printf("address of &a[1][2]=%u\n",&a[1][2]);
printf("address of &a[2][0]=%u\n",&a[2][0]);
printf("address of &a[2][1]=%u\n",&a[2][1]);
printf("address of &a[2][2]=%u\n",&a[2][2]);
printf("value of a[0][0]=%d\n",a[0][0]);
printf("value of a[0][1]=%d\n",a[0][1]);
printf("value of a[0][2]=%d\n",a[0][2]);
printf("value of a[1][0]=%d\n",a[1][0]);
printf("value of a[1][1]=%d\n",a[1][1]);
printf("value of a[1][2]=%d\n",a[1][2]);
printf("value of a[2][0]=%d\n",a[2][0]);
printf("value of a[2][1]=%d\n",a[2][1]);
printf("value of a[2][2]=%d\n",a[2][2]);

printf("%u\n",&a[0][0]);


    return 0;
}
