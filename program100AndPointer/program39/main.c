/*C Program to accept 10 numbers and print first five numbers in original order and print last five
numbers in reverse order.*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int number[10],sum=0,rev=0,rem;
    printf("Enter the ten number\n");

    for(int i=0;i<10;i++){
    scanf("%d",&number[i]);
    }
    for(int i=0;i<10;i++){
        if(i>4){
            while (number[i]>0) {
               rem=number[i]%10;
               rev=rev*10+rem;
               number[i]/=10;
            }
            number[i]=rev;
            rev=0;
        }
    }
    for(int i=0;i<10;i++){
    printf("the reverse number is=%d\n",number[i]);
    }


    return 0;
}
