//C Program to accept a string print each word in new line.
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
     char name[30];
     int m,i=0;
    printf("Enter the name\n");
    fgets(name,sizeof(name),stdin);
    m=strlen(name);
    while(m>0){
        printf("%c",name[i]);
        if(name[i]==32)
        {
            printf("\n");
        }
        i++;
        m--;
    }
    printf("\n");
    return 0;
}
