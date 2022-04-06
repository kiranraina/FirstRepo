//C Program to accept a string in any case and print it by another case.
#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[20];
    int m,i=0;
    printf("Enter the uppercase string\n");
    scanf("%s",name);
    m=strlen(name);
    while(i<=m)
    {
      if(name[i] >= 'a' && name[i] <= 'z')
      {
        printf("%c",name[i]-32);
        i++;
      }else
      {
          printf("%c",name[i]+32);
          i++;
      }
    }
    printf("\n");
    return 0;
}
