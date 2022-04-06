#include <stdio.h>

int main()
{
//    int i=3,*x;
//    float j=1.5,*y;
//    char k='c',*z;
//    printf("value of i=%d\n",i);
//    printf("value of j=%f\n",j);
//    printf("value of k=%c\n",k);

//    x=&i;
//    y=&j;
//    z=&k;
//    printf("original value in x=%u\n",x);
//    printf("original value in y=%u\n",y);
//    printf("original value in z=%u\n",z);

//    x++;
//    y++;
//    z++;

//    printf("new value in x=%u\n",x);
//    printf("new value in y=%u\n",y);
//    printf("new value in z=%u\n",z);


//    int i=4,*j,*k;
//    j=&i;
//    printf(" j=%u\n",j);
//    j=j+1;
//    printf(" j=%u\n",j);
//    j=j+9;
//    printf(" j=%u\n",j);
//    k=j+3;
//    printf(" j=%u\n",k);



    int num[]={5,6,7,8,9,3};
    int *j;
    int i=0;
    j=&num[0];
    while(i<=5)
    {
       printf("\nelement no %u",&num[i]);
       printf("\n address no %d",*j);
       i++;
       j++;
    }
    return 0;
}
