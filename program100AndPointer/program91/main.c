/*C Program to accept elements into single dimensional array and print the array in ascending order
by using three different arrays.*/
#include <stdio.h>
void swap(int*,int*);
int main(int argc, char *argv[])
{
    int array[9],array1[3],array2[3],array3[3];
    printf("Enter the 9 element!\n");
    for(int i=0;i<9;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0,j=3,k=0,n=6;i<3,j<6,k<3,n<9;i++,j++,k++,n++)
    {
        array1[k]=array[i];
        array2[k]= array[j];
        array3[k]=array[n];
    }
//    sort=array[0];
    for(int w=0;w<3;w++){
       for(int x=w+1;x<3;x++){
           if(array1[w]>=array1[x]){
           swap(&array1[w],&array1[x]);
            }
           if(array2[w]>=array2[x]){
           swap(&array2[w],&array2[x]);
            }
           if(array3[w]>=array3[x]){
           swap(&array3[w],&array3[x]);
            }
    }
    }
    printf("array1\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",array1[i]);
    }
    printf("array2\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",array2[i]);
    }
    printf("array\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",array3[i]);
    }

    return 0;
}
void swap(int *m, int *n){
    int t;
    t=*m;
    *m=*n;
    *n=t;
}
