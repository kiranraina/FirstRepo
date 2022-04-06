//C Program To Read A Number And Find Whether The Given Number Is Even Or Odd.
#include <stdio.h>

int main()
{
    int Number;
    printf("Enter the Number\n");
    scanf("%d",&Number);
    if(Number%2==0){
       printf("Enter the Number is Even=%d\n",Number);
    }else{
       printf("Enter the Number is Odd=%d\n",Number);
    }
    return 0;
}
