#include <stdio.h>
void copy(char*t,char*s);
int main(int argc, char *argv[])
{
    char str1[]="Nagpur";
    char str2[10];
    printf("address of str1[0]=%u\n",&str1[0]);
    printf("value of str1[0]=%c\n",str1[0]);
     printf("\n before str2=%s",str2);
      printf("\nbefore str1=%s",str1);
//      for(int i=0;i<10;i++){
//      printf("%d\n",str2[i]);
//      }
    copy(str2,str1);

    printf("\n after str2=%s",str2);
    printf("\n after str1=%s",str1);
    return 0;
}
void copy(char*t,char*s)
 {

     printf("\ninside copy\n");

     printf("address of s=%u\n",s);
     printf("value of s=%c\n",*s);
     *s=*s-6;
     printf(" after address of s=%u\n",s);
     printf(" after value of s=%c\n",*s);

//     while(*s!='\0')
//     {
//         printf("inside while in copy\n");
//         *t=*s;
//         s++;
//         t++;
//         printf("%c",*t);
//     }
//     *t='\0';
 }

