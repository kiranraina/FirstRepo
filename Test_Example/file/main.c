#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    FILE *file;
    char name[30]="kiran";
   file= fopen("file.txt","a");
   if(file==NULL){
   printf("file not exit");
   }
   else{
    printf("file open\n");
    if(strlen(name)>0){
        fputs(name,file);
        fputs("\n",file);
    }
    printf("%s",name);
    fclose(file);
   }
    return 0;
}
