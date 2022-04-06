#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, count=0,j=2;
    printf("it is prime number=1\n");

    while(j<=100)
    {
        int n=j/2;
        for(i=2;i<=n;i++)
        {
            if(j%i==0)
            {
                count++;
            }
        }
        if(count==0){
            printf("it is prime number = %d\n",j);
        }
        j++;
        count=0;
    }
    return 0;
}
