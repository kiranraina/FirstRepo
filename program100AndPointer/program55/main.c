//C Program to search an element using binary search
#include <stdio.h>
int binarysearch(int array[],int low,int n,int high){
    while(low<=high){
        int mid=low +(high-low)/2;
        if(array[mid]==n){
            return mid;
        }else if(array[mid]<n){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return -1;
}
//int binarysearch(int,int,int,int);
int main(int argc, char *argv[])
{
    int array[5],n,length,result;
    printf("Enter the 5 value\n");
    for(int i=0;i<5;i++){
       scanf("%d",&array[i]);
    }
    printf("Enter the you want in array value\n");
    scanf("%d",&n);
    length=sizeof(array)/sizeof(array[0]);
    result=binarysearch(array,0,n,length-1);
    if(result==-1){
        printf("you enter data not in array\n");
    }else{
        printf("you enter the data=%d",result);
    }
    return 0;
}

