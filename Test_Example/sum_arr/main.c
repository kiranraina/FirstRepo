#include <stdio.h>
void sum(int num1[],int m);
int main(int argc, char *argv[])
{
    int n;
   printf("Enter the value");
   scanf("%d",&n);
   int num[n];
   printf("Enter tha value n element\n");
   for(int i=0;i<n;i++)
   {
   scanf("%d",&num[i]);
   }
   sum(num,n);
    return 0;
}
void sum(int num1[],int m){
    int total=0;
    for(int i=0;i<m;i++){
        total+=num1[i];
    }
    printf("sum of array=%d",total);
}
