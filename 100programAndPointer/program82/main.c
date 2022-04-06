//C Program to accept a string using pointers and functions.
#include <stdio.h>
#include <string.h>

void reverse_1(char*,int);
 int m;
int main(int argc, char *argv[])
{
    char name[30];

    printf("enter the string name\n");
    gets(name,sizeof(name),stdin);
    m=strlen(name);
   reverse_1(name,m);
    return 0;
}
void reverse_1(char *str,int m){
   char *ptr=str+m-1;
    while (*ptr!='\0'){
        printf("%c",*ptr);
        ptr--;
    }
}
