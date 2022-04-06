//C Program which does the below process after reading on odd no of integer.
#include <stdio.h>
 void swap(int *,int *);
int main(int argc, char *argv[])
{
    int num[5],i=0,j,k=0,count=0;
    printf("Enter the 5 number\n");
    for(i;i<5;i++){
        scanf("%d",&num[i]);
    }

    for(k=0;k<5;k++){
       for(j=k+1;j<5;j++){
           if(num[k]>=num[j]){
          swap(&num[k],&num[j]);
           }
       }
    }

    printf("print sort");
    for(int n=0;n<5;n++){
        printf("%d\n",num[n]);
    }
    printf("print odd numbers\n");
    for(int n=0;n<5;n++){
        if(num[n]%2!=0){
        printf("The odd numbers%d\n",num[n]);
        count++;
        }
    }
    printf("the number of odd integer\n",count);



    return 0;
}
void swap(int *x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
