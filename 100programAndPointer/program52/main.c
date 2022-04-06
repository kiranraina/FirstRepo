//C Program to check whether a given number is perfect or not.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int num,sum=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i=1;i<num;i++){

       if(num%i==0)
       {
           sum+=i;
       }
//       printf("the number is perfect=%d\n",i);
    }
    if(sum==num){
        printf("the number is perfect=%d\n",num);
    }else{
        printf("the number is not perfect=%d\n",num);
    }
    return 0;
}
