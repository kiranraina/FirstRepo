//C Program to accept a string in lower case and print first character of each word in upper case.
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
            printf("%c",name[0]-32);
        }
        else if(name[i]==32)
        {
            printf("\n");
            i++;
            printf("%c",name[i]-32);
        }else{
                printf("%c",name[i]);
        }
        i++;
        m--;
    }
    printf("\n");
    return 0;
}
