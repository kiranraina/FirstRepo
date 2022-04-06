#include <stdio.h>
#include "alloca.h"

int main(int argc, char *argv[])
{
    int n,avg,i,*p,sum=0;
    printf("Enter the number of students\n");
    scanf("%d",&n);

    p=(int*)malloc(n*4);
    if(p==NULL)
    {
        printf("unsuccessfully memory allocated");
        exit(0);

    }
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(i=0;i<n;i++){
        sum=sum+*(p+i);
    }
    avg=sum/n;
    printf("average marks=%d",avg);
    return 0;
}
