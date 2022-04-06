//C Program to accept a string and check the given string is palindrome or not .
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
   char name[20],rev[20],m;
   int flag=0;

   printf("Enter the name\n");
   fgets(name,sizeof(name),stdin);
   m=strlen(name);
   printf("%d\n",m);
   for(int i=0;i<m-1;i++)
   {
       if(name[i]!=name[m-i-2]){
           flag=1;
       }
   }
   if(flag==1)
   {
     printf("The character is  not palidrome\n");
   }
   else
   {
       printf("the character is  palidrome\n");
   }

    return 0;
}
