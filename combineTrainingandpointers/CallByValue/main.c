#include <stdio.h>

int main()
{
    int a=10,b=20;
//    swapv(a,b);
    swapr(&a,&b);
    printf("\na=%d",a);
    printf("\nb=%d\n",b);
    return 0;
}
swapv(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;

    printf("\nx=%d",x);
    printf("\ny=%d",y);
}
swapr(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
