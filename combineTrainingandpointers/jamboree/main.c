#include <stdio.h>

int main()
{
    float *jamboree(float*);
    int *q;
    int p=100;
//    printf("\n &P before call=%u",&p);
    q=&p;
//    (*q)++;
//    (*q)++;
//   ++(*q);
    (*q)++;
    printf("address of q before incrementing=%d\n",&q);
    printf("\nq before call=%d\n",*q++);
    printf("address of q after incrementing=%d\n",&q);

//    printf("\n *q before call=%u",*q);
    q=jamboree(&p);
    printf("\n q after call=%u",q);
    return 0;
}
float *jamboree(float* r)
{
    printf("====value of r=%f\n",r);
    printf("address of r=%u\n",&r);
    r=r+1;
    printf("after value of r=%f\n",r);
    printf("after address of r=%u\n",&r);
    return (r);
}
