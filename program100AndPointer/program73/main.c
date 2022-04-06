//C Program to sort the entered elements using selection sort technique.
#include <stdio.h>
int main(int argc, char *argv[])
{
    int num[5],i=0,j,k=0,temp,position;
    printf("Enter the 5 number\n");
    for(i;i<5;i++){
        scanf("%d",&num[i]);
    }

    for(k;k<5-1;k++){
        position=k;
       for(j=k+1;j<5;j++){
           if(num[position]>=num[j]){
               position=j;
           }
       }
           if(position!=k){
           temp=num[k];
           num[k]=num[position];
           num[position]=temp;
           }
       }

    printf("Selection sort element");
    for(int n=0;n<5;n++){
        printf("%d\n",num[n]);
    }
    return 0;
}
