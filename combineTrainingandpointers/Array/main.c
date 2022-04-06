#include <stdio.h>
void display(int*);
void show(int**);
int main()
{
    int num[]={5,6,7,8,9,3,5};
    for(int i=0;i<7;i++)
    {
       display(&num[i]);
    }
    return 0;
}
 void display(int *m){

   show(&m);
}
 void show (int **n){
     printf("%d\n",**n);
 }
