#include <stdio.h>
#include <string.h>
//void length();

 int count=0;
  char name[8];
  int a;
int main(int argc, char *argv[])
{

    printf("Enter the name\n");

    gets(name,sizeof(name),stdin);
    a=strlen(name);
    printf("%d\n",a);
//    length();
    return 0;

}
//void length(){
//    for(int i=0;name[i]!='\0';i++)
//    {
//        count++;
//    }
//    printf("the length of string=%d\n",count);
//}
