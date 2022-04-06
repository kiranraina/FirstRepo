//C Program to accept a string in upper case and print it by lower case.
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char name[20];
    int m,i=0;
    printf("Enter the uppercase string\n");
    scanf("%s",name);
    m=strlen(name);
    while(i<=m)
    {
      printf("%c",name[i]+32);
      i++;
    }
    printf("\n");
    return 0;
}
