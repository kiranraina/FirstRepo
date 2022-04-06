//C Program to read a string and print the number of characters in each word of the string.
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char name[30];
    int m,i=0,count=0;
    printf("enter the string name\n");
    gets(name,sizeof(name),stdin);
    m=strlen(name);
    printf("%d\n",m);
    while(m>=0){
//        printf("%c",name[i]);
        if(name[i]==32||name[i]=='\0')
        {
            printf("%d\n",count);
            count=-1;

        }
//        if((name[i]>='A'&&name[i]<='Z')||(name[i]>='a'&&name[i]<='z')){
        count++;
//        }
        i++;
        m--;

    }

    return 0;
}
