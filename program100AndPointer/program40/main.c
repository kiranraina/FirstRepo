//C Program to accept a string and print the reverse of the given string by using for loop.
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char name[30];
    int m,n;
   printf("Enter the name\n");
   fgets(name,sizeof(name),stdin);
   m=strlen(name);
   n=m-1;
   for(n;m>0;m--){
       printf("%c",name[n]);
       n--;
   }
   printf("\n");
   return 0;
}
