#include <stdio.h>

//int main()
//{
//    int *p1,i=25;
//    void*p2;
//    p1=&i;
//    p2=&i;
//    p1=p2;
//    p2=p1;
//    return 0;
//}
//int main()
//{
//    float *p1,i=25.50;
//    char *p2;
//    p1=&i;
//    p2=&i;

//  return 0;
//}
//int main()
//{
//    int a,*b,**c,***d,****e;
//    a=10;
//    b=&a;
//    c=&b;
//    d=&c;
//    e=&d;
//    printf("a=%d\n b=%u\n c=%u\n d=%u\n e=%u\n ",a,b,c,d,e);
//    printf("\n%d\n %d\n %d\n ",a,a+*b,**c+***d+****e);
//  return 0;
//}
int main()
{
   char c,*cc;
   int i;
   long l;
   float f;
   c='Z';
   i=15;
   l=77777;
   f=3.14;
   cc=&l;
   printf("%ld\n%u\n",l,&l);
//   printf("%lc\n %u\n,",c,&c);
   printf("%u\n %ld\n",cc,cc);

//   cc=&c;
//   printf("\n*c=%c cc=%u\n",*cc,cc);
//   cc=&i;
//   printf("\ni=%d cc=%u\n",*cc,cc);
//   cc=&l;
//   printf("\nl=%ld cc=%u\n %u\n",*cc,cc,&l);
//   cc=&f;
//   printf("\nf=%f cc=%u\n",*cc,cc);
  return 0;
}
