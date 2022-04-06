/*C Program to accept values into single dimensional array and print the array in reverse by using
pointers.*/
#include <stdio.h>
void show(int *);

int main(int argc, char *argv[])
{
    int  number[5];
     printf("Enter the 5 number\n");
     for(int i=0;i<5;i++){
      scanf("%d",&number[i]);
     }
     for(int i=4;i>=0;i--){
          show(&number[i]);
     }

    printf("Hello World!\n");
    return 0;
}
void show(int *n){
    printf("%d\n",*n);
}
