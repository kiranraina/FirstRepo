#include <stdio.h>
//float*multiply(int,float);
//int main()
//{
//  int i=3;
//  float f=3.50,*prod;

//  prod=multiply(i,f);
//  printf("prod=%u value",prod);
//    return 0;
//}
//float*multiply(int ii,float ff){
//     float product;
//    product=ii*ff;
//    printf("\n product=%f address of product=%u",product,&product);
//    return (&product);
//}


//int main()
//{
//    char *c=4000;
//    int *i=4000;
//    long *l=4000;
//    float *f=4000;
//    double *d=4000;

//    int a=5;
//    i=&a;
//    printf("\n c=%u,c+1=%u ",c,c+1);
//    printf("\n i=%u,i+1=%u *i+1=%u",i,i+1,*i+1);
//    printf("\n l=%u,l+1=%u",l,l+1);
//    printf("\n f=%u,f+1=%u",f,f+1);
//    printf("\n d=%u,d+1=%u",d,d+1);
// return 0;
//}

int main()
{
    int i=10, j=20,diff;

    diff=&i-&j;
    printf("\n address of i=%u  address of j=%u ",&i,&j);
    printf("\n diff  address of =%d  ",diff);
    return 0;
}
//int main(){

//    return 0;
//}

