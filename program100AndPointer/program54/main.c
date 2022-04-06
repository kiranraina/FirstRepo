//C Program to read ‘n’ number and print them in matrix terms in all orders.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int num,a[8],j=0,count=0;
    printf("Enter the possible matrix above 1 numbers\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0){

            a[j]=i;
            j++;
            count++;
        }
    }
    j=j-1;
    for(int i=0;i<count;i++){
        printf("%d,%d\n",a[i],a[j]);
        j--;
    }
    return 0;
}
