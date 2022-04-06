//C Program to accept a string using pointers and functions.
#include <stdio.h>
#include <string.h>

void display(char*,int);
 int m;
int main(int argc, char *argv[])
{
    char* name[30];

    printf("enter the string name\n");
    gets(name,sizeof(name),stdin);
    m=strlen(name);
   display(name,m);
    return 0;
}
void display(char *str,int m){
  ;
    while (*str!='\0'){
        printf("%c",*str);
        str++;
    }
}
