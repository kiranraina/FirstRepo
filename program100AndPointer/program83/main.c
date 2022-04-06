//C Program to read a string and print the first two characters of each word in the string.
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char name[30];
    int m,i=0;
    printf("enter the string name\n");
    gets(name,sizeof(name),stdin);
    m=strlen(name);
//    printf("%d",m);
    while(m>=0){
        if(i==0){
            printf("%c",name[0]);
            printf("%c",name[1]);
            printf("\n");
        }
        if(name[i]==32)
        {
            i++;
            printf("%c",name[i]);
            i++;
            printf("%c",name[i]);
            printf("\n");
        }
        i++;
        m--;
    }

    return 0;
}
