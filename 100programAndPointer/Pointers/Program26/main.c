#include <stdio.h>

int main(int argc, char *argv[])
{
    char character;
    printf("Enter the  alphabet character\n");
    scanf("%c",&character);
    if(character >= 'a' && character <= 'z')
    {
        character=character-32;
      printf("The small letter =%c\n",character);
    }
     else if(character >= 'A' && character <= 'Z')
    {
        character=character+32;
       printf("The capital letter of =%c\n",character);
    }
    else
    {
       printf("It's not a alphabet\n");
    }
    return 0;
}
