
#include <stdio.h>

//#include<stdio.h>
//#include <string.h>
//int main(){
//  char ch[11]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};
//   char ch2[11]="javatpoint";

//   printf("Char Array Value is: %s\n", ch);
//   printf("String Literal Value is: %s\n", ch2);
// return 0;
//}
int main(int argc, char *argv[])
{
    char name[]="hello";
    int i;char array[5]={'1','2','a','s','d','\0'};
    i=0;
    scanf("%c",name);
    while(name[i]){
        printf("\n%c %c %c %c",name[i],*(name+i),*(i+name),i[name]);
        i++;

    }
//    printf("%s",name);
      printf("\n");
    printf("%c",array);
    printf("\n");
    printf("%c",name);

    return 0;
}
