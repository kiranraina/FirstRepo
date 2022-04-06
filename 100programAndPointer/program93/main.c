/*C Program to accept data in lower case and store the given data into file into upper case and print
the data.*/
#include <stdio.h>
# include <string.h>

int main(int argc, char *argv[])
{
    char name[30],name1[30];
    FILE *file;
    printf("enter the string \n");
    fgets(name,30,stdin);
    file=fopen("file.txt","w");
    if(file==NULL)
    {
        printf("file open failed\n");
    }
    else
    {
        printf("file.txt opened success\n");
        for(int i=0;i<strlen(name)-1;i++){
            if(name[i]!=32)
            name[i]-=32;
        }
        fputs(name,file);
        fclose(file);
        }

    file=fopen("file.txt","r");
    if(file==NULL)
    {
        printf("file open failed\n");
    }
    else
    {
        printf("file.txt read opened success\n");
    while(fgets(name1,30,file)!=NULL){
         printf("name1=%s",name1);
      }
    }

    return 0;
}
