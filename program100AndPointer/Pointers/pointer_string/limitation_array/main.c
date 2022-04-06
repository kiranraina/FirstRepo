#include <stdio.h>
#include <alloca.h>

int main(int argc, char *argv[])
{
//    char* names[6];
//    int i;
//    for(i=0;i<=5;i++){
//        printf("\nEnter name\n");
//        scanf("%s",&names[i]);
//    }
//    for(i=0;i<=5;i++){
//        printf("%s",names[i]);
//    }
//    return 0;
 char *names[5];
 char str[20];
 int i;

 for(i=0;i<5;i++){
     printf("Enter a String:\n");
     gets(str);
     names[i]=(char*)malloc(strlen(str));
     strcpy(names[i],str);
 }
 for(i=0;i<5;i++){
     printf("\n%s\n",names[i]);
 }
}
