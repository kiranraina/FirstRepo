#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[2][2][2]={

        {
        2,4,
        5,6
        },

        {
            7,8,
             9,4
        }
    };
    printf("%u\n",a);
    printf("%u\n",&a);
    printf("%u\n",a+0);
    printf("%u\n",a+1);
    printf("%u\n",&a+0);
    printf("%u\n",&a+1);
    printf("%u\n",*a);
    printf("%u\n",a[0]);
    printf("%u\n",*a[0]);
    printf("%u\n",a[0]+1);
    printf("%u\n",&a[0]+1);
    printf("%u\n",a[1]);
    printf("%u\n",a[2]);
    printf("%u\n",a[0][0]);
    printf("%u\n",&a[0][0]);
    printf("%u\n",*a[0][0]);
    printf("%u\n",a[0][1]);
    printf("%u\n",a[1][0]);
    printf("%u\n",a[1][1]);
    printf("%u\n",a[2][2]);
    printf("%u\n",a[0][0][0]);
    printf("%u\n",&a[0][0][0]);


    return 0;
}
