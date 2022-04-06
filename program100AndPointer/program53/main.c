//C Program to check whether a given number is prime number.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, count=0;
    printf("enter the number\n");
    scanf("%d",&num);

    if(num>=0)
    {
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
        if(count==0){
            printf("it is prime number = %d\n",num);
        }else{
             printf("it is prime not number = %d\n",num);
        }

    }
    return 0;
}
