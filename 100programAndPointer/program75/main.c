//C Program to find maximum and minimum of entered ’n’ number using arrays.
#include <stdio.h>

int main(int argc, char *argv[])
{
   int  n,min,max;
   printf("Enter the number");
   scanf("%d",&n);
   int number[n];
    printf("Enter the array number\n");
    for(int i=0;i<n;i++){
           scanf("%d",&number[i]);
    }
   max=min=number[0];
    for(int k=1;k<n;k++){

       if(min>number[k]) {
           min=number[k];
       }
        if(max<number[k]) {
                 max=number[k];
             }
    }
    printf("the minimum number in array is=%d\n",min);
    printf("the maximum number in array is=%d\n",max);

    return 0;
}
