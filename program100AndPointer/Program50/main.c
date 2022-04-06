#include <stdio.h>
void swap(int*,int*);
int main(int argc, char *argv[])
{
    int a,b;
    printf("Enter the a and b value\n");
    scanf("%d %d",&a,&b);
    printf("before a value =%d and b value =%d\n ",a,b);
    swap(&a,&b);
    printf("after a value =%d and b value =%d\n ",a,b);
    return 0;
}
void swap(int *i, int *j){
    int k;
    k=*i;
    *i=*j;
    *j=k;
}
