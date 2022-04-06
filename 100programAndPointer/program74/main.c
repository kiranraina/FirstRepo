//C Program to find whether a number is divisible by ‘11’ or not without actual division.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int number,i=0,sum=0,arr[10],rem,count=0,val1=0,val2=0,total=-1;
    printf("Enter the number\n");
    scanf("%d",&number);
    while(number>0){
    rem=number%10;
    sum=rem;
    number=number/10;
    arr[i]=sum;
    i++;
    count++;
    }
    int m=count;
    for(int i=0;i<m;i++){
    if(count%2==0)
    {
        val1+=arr[i];
    }else
    {
       val2+=arr[i];
    }
    count--;
    }
    total=val1-val2;
    if(total==0||total==11)
    {
        printf("the number is divisble by 11");
    }else{
         printf("the number not is divisble by 11");
    }
    return 0;
}


