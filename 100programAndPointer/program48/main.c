//C Program to sort the entered numbers using bubble sort.
#include <stdio.h>
 void swap(int *,int *);
int main(int argc, char *argv[])
{
    int num[5],i=0,j,k=0;
    printf("Enter the 5 number\n");
    for(i;i<5;i++){
        scanf("%d",&num[i]);
    }

    for(k=0;k<5-1;k++){
       for(j=0;j<5-k-1;j++){
           if(num[j]>num[j+1]){
          swap(&num[j],&num[j+1]);
           }
       }
    }

    printf("*******\n");
    for(int n=0;n<5;n++){
        printf("%d\n",num[n]);
    }


    return 0;
}
void swap(int *x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
