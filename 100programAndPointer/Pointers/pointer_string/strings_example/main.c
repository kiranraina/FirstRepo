//#include <stdio.h>

//int main(int argc, char *argv[])
//{
////char *str1="United";
////char *str2="Front";
////char *str3;
//    char str1[]="kiran";
//    char str2[]="kumar";
//    char str3[15];
//printf("The string str1=%s\n the address of str1=%u\n",str1,str1);
//printf("The string str2=%s\n the address of str2=%u\n",str2,str2);
////printf("The string str3=%s\n the address of str3=%u\n",str3,str3);
//strcat(str1,str2);
//printf("\nafter The string str1=%s\n",str1);
//printf("after The string str2=%s\ns",str2);
////printf("after The string str=%s\n after the address of str1=%u",str2,str2);
////printf("after The string str=%s\n after the address of str1=%u",str3,str3);
//    return 0;
//}


#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str1[15]="United";
    char *str2="Front";
    char *str3;
//    str3=strcat(str1,str2);
    strcat(str1,str2);
    printf("\nstr1=%s",str1);
    printf("\nstr2=%s",str2);
//    printf("\nstr3=%s",str3);
    return 0;
}
