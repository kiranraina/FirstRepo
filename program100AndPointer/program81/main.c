//C Program to accept two strings and compare those two strings
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char str1[10],str2[10];
    int value;
    printf("Enter the 2 strings\n");
    scanf("%s\n %s",str1,str2);
    value=strcmp(str1,str2);
    if(value==0){
       printf("the two string equal\n");
    }else
    {
        printf("the two string not equal\n");
    }

    return 0;
}
