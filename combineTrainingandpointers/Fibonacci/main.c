// C Program to print fibonacci series.
#include <stdio.h>

int main()
{
    int number,a=0,b=1,c=0;
    printf("Enter three digit number\n");
    scanf("%d",&number);
    printf("%d\n",a);
    printf("%d\n",b);
    while(c<number){
    c=a+b;
    a=b;
    b=c;
    printf("%d\n",c);
    }
    return 0;
}
