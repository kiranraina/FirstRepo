#include <stdio.h>

int main(int argc, char *argv[])
{
    int number,rem,armstrong=0,duplicate;
    printf("Enter the number\n");
    scanf("%d",&number);
    duplicate=number;
    while(number>0)
    {
       rem=number%10;
       armstrong+=rem*rem*rem;
       number=number/10;
    }
    if(duplicate==armstrong){
        printf("the number is armstrong=%d\n",duplicate);
    }
    else{
        printf("the number is not armstrong=%d\n",duplicate);
    }
    return 0;
}
