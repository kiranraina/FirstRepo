#include <stdio.h>

int main(int argc, char *argv[])
{
    static int a[]={0,1,2,3,4};
    static int *p[]={a,a+1,a+1,a+4,a+3};
    int **ptr;
    ptr=p;
    **++ptr;
    printf("\n%d %d %d %d ",**ptr,ptr-p,*ptr-a);
    return 0;
}
