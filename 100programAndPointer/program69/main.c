//C Program to copy contents of one file into another.
#include <stdio.h>
# include <string.h>

int main(int argc, char *argv[])
{
   FILE *file,*file1;

   char data[50]="GeeksforGeeks-A Computer Science Portal for Geeks",name[50];

     file=fopen("file.txt","r");

     if(file==NULL)
     {
         printf("file.txt open failed\n");
     }
     else
     {
         printf("file.txt opened success\n");
         while(fgets(name,50,file)!=NULL){
             fprintf("%s",name);
         }
         fclose(file);
         printf("Data successfully read in file file.txt\n");
         printf("The file is closed\n");
     }
     file1=fopen("file1.txt","w");
     if(file1==NULL)
     {
        printf("file1.txt open failed\n");
     }
     else
     {
      printf("file1.txt opened success\n");
      if(strlen(name)>0){
          fputs(name,file1);
      }
      fclose(file1) ;

            printf("Data successfully written in file file1.txt\n");
            printf("The file1 is now closed.\n") ;
     }

    return 0;
}
