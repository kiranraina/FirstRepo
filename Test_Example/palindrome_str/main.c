#include <stdio.h>
#include <string.h>
void palindrome(char*);
int main(int argc, char *argv[])
{
    int m=0;
    printf("Enter the string length");
    scanf("%d",&m);
      char str[m];
    printf("Enter the string\n");
    scanf(" %[^\n]s",str);
    printf("%s",str);
    palindrome(str);
    return 0;
}
void palindrome(char* string){
   int n=strlen(string),count=0;

  for(int i=0,j=n-1;i<n;j--,i++){
      if(string[i]!=string[j]){
          count=1;
      }
  }
  if(count==0){
      printf("Enter the string is palindrome");
  }else{
      printf("Enter the string is not  palindrome");
  }

}
