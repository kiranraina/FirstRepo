/*C Program to accept a string and count no of capital letters, no. of small letters and no. of special
characters*/
#include <stdio.h>

int main(int argc, char *argv[])
{
   char name[10];
   int m,i=0,CapChCount=0,SmChCount=0,SplChCount=0;
   printf("Enter the name\n");
   fgets(name,sizeof(name),stdin);
   m=strlen(name);

   while (m>0) {
     if(name[i]>='A'&&name[i]<='Z')
     {
         CapChCount++;
     }
     else if(name[i]>='a'&&name[i]<='z')
     {
         SmChCount++;
     }
     else
     {
        SplChCount++;
     }
     i++;
     m--;
   }
   printf("the capital letter are=%d\n",CapChCount);
   printf("the capital letter are=%d\n",SmChCount);
   printf("the capital letter are=%d\n",SplChCount);
    return 0;
}
