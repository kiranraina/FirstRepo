/*C Program to print a frequency distribution table for a class of 20-students in the following
format.The marks range form 1-25.*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int array[20],n=0,n1=0,n2=0,n3=0,n4=0;
       printf("enter the 20 student marks  in the range 1to25\n");
        for(int i=0;i<20;i++){
            scanf("%d",&array[i]);
            }
        for(int i=0;i<20;i++){
         if((array[i]>=1)&&(array[i]<=5)){
             n++;
         }else if((array[i]>=6)&&(array[i]<=10)){
             n1++;
         }else if((array[i]>=11)&&(array[i]<=15)){
             n2++;
         }else if((array[i]>=16)&&(array[i]<=20)){
             n3++;
         }else if((array[i]>=21)&&(array[i]<=25)){
             n4++;
         }else{
             printf("enter value less or above the 25 is not valid");
         }
        }
         printf("The range from 1 to 5 number count in=%d\n",n);
         printf("The range from 6 to 10 number count in=%d\n",n1);
         printf("The range from 11 to 15 number count in=%d\n",n2);
         printf("The range from 16 to 20 number count in=%d\n",n3);
         printf("The range from 21 to 25 number count in=%d\n",n4);

    return 0;
}
