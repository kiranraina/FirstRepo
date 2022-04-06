//C Prongram to accept a string and print each word in reverse
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char name[30];
    int m,i=0;
    printf("enter the string name\n");
    gets(name,sizeof(name),stdin);
    m=strlen(name);
    i=m-1;
//    printf("%d\n",m);
    while (m>0) {
              printf("%c",name[i]);
              if(name[i]==32){
                 printf("\n");
              }
              i--;
              m--;
    }

    return 0;
}

