#include <stdio.h>

int main()
{
    int number,rem=0,total=0,num;
    printf("Enter three digit number\n");
    scanf("%d",&number);
    num=number;
    while(number>0)
    {
        rem=number%10;
        total+=rem*rem*rem;
        number=number/10;
    }
    if(num==total)
    {
     printf("the number is armstrong %d\n",total);
    }
    else
    {
        printf("the number is not armstrong %d\n",total);
    }
    return 0;
}
