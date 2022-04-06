//C Program to print Armstrong number between 1-500.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int number=1,rem,armstrong,duplicate;

    for(number=1;number<500;number++)
    {
        duplicate=number;
          armstrong=0;

            while(duplicate>0)
            {
               rem=duplicate%10;
               armstrong +=rem*rem*rem;
               duplicate=duplicate/10;
            }
            if(number == armstrong){
                printf("the number is armstrong=%d\n",number);
            }
    }
    return 0;
}

