#include <stdio.h>

int main(int argc, char *argv[])
{
//   int p[10]={1,1,2,3,4,5,6,7,8,9};
int a=10;
int *p;
 p=&a;
//printf("%u",p);
//printf("%d",*p);
//    printf("p=%u\n",p);
//    printf("p[0]=%d\n",p[0]);
//    printf("&p[0]=%u\n",&p[0]);
//    printf("p+1-p=%u\n",(p+1-p));
//    printf("p[0]+1=%d\n",p[0]+1);
//    printf("p[1]=%d\n",p[1]);
//    printf("&p[1]=%u\n",&p[1]);
//    printf("(&p+1)=%u\n",(&p+1));
//    return 0;
++a;
printf("%d\n",a);
a++;
printf("%d\n",a);
//++*p;
//printf("%d",*p);
//*p++;
//printf("%d",*p);
}
