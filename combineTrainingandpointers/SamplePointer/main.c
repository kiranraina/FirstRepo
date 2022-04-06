#include <stdio.h>
int *check(int,int);

int main()
//{
//    float a=7.999999;
//    float *b,*c;
//    float r=7;
//    b=&a;
//    c=b;
//    printf("\n%u\n %u\n %u\n ",&a,b,c);
//    printf("%d\n %d\n %d\n %d\n ",a,*(&a),*b,*c);
//    printf("\n%f ",r);
//    return 0;
//}
{
    int *c;
    c=check(10, 20);
    printf("\nc=%u",*c);
    return 0;
}
 int *check(int i ,int j)
{
   int *p,*q;
   p=&i;
   q=&j;
   if(i>=45)
       return (p);
   else
       return (q);
}


