#include <stdio.h>

int main(int argc, char *argv[])
{
    char character;
    printf("Enter the capital alphabet character\n");
    scanf("%c",&character);
    character=character+32;


   printf("%c\n",character);
    return 0;
}


