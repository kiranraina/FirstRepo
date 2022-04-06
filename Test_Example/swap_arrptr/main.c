//#include <stdio.h>

//void swap(char **string){
//    char *temp;
//    temp=string[0];
//    string[0]=string[1];
//    string[1]=temp;
//}
//int main(int argc, char *argv[])
//{
//    char *name[]={"hello","world"};
//    printf("enter string1\n");
//    swap(name);
//    printf(" after swap the name[0]=%s,the name[1]=%s\n",name[0],name[1]);
//    return 0;
//}
#include <stdio.h>
#include <string.h>

void swap(char *string1,char*string2){
    printf("string2=%s\n",string1);
    char *temp;
    while(*string1!='\0'){

       *temp=*string1;
       *string1=*string2;
        *string2=*temp;
        string1++;
        string2++;
    }

}
int main(int argc, char *argv[])
{
   int m;
   printf("Enter the length string\n");
   scanf("%d",&m);
   char str1[m],str2[m];
    printf("enter string1\n");
     scanf(" %[^\n]s",str1);
     printf("enter string2\n");
      scanf(" %[^\n]s",str2);
    swap(str1,str2);
    printf(" after swap the str1=%s,the str2=%s\n",str1,str2);
    return 0;
}




