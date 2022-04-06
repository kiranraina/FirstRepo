//C Program to accept a number and print the sum of given and Reverse number
#include <stdio.h>

int main(int argc, char *argv[])
{
    int number,sum=0,rev=0,rem;
    printf("Enter the number\n");
    scanf("%d",&number);
    while(number>0){
        sum+=number;
        number--;
    }
    printf("the sum of given number=%d\n",sum);
    while (sum>0) {
       rem=sum%10;
       rev=rev*10+rem;
       sum/=10;
    }
    printf("the reverse number is=%d\n",rev);

    return 0;
}
