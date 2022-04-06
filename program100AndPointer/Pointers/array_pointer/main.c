#include <stdio.h>

int main(int argc, char *argv[])
{
   int array[]={2,3},*p,*q;
//   *p=array[0];
   q=array[0];
//   printf("*q=%d\n",*q);
   printf("q=%d\n",q);
//   printf("*p=%d\n",*P);
//   printf("p=%d\n",p);
   printf("&array[0]=%d\n",&array[0]);
   printf("&array=%d\n",&array);
   printf("array[0]=%d\n",array[0]);
   printf("array=%d\n",array);
   printf("(array+0)=%d\n",*(array+0));
   printf("(0+array)=%d\n",*(0+array));
   printf("0[array]=%d\n",0[array]);

    return 0;
}
