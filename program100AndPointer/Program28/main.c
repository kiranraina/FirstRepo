//C Program to accept a string and print it by using the while loop.
#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[20];
    int i=1;
    printf("Enter the string\n");
    scanf("%s",name);
    while(i>0)
    {
      printf("%s\n",name);
      i--;
    }
    return 0;
}
