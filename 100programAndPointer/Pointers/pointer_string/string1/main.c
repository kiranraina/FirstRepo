#include <stdio.h>
int i=0;
int main(int argc, char *argv[])
{
    int array[]={2,3,5};
    char arr[]="Bamboozled";
    int len1,len2;
    xstrlen(array);
//    len2=xstrlen("HumptyDumpty");
    printf("\n string =%s length =%d",arr,len1);
    return 0;
}
xstrlen(int array[]){
    printf("%u",array);
int i=0;
    while(i<3){
        printf("%d\n",array[i]);
        i++;
    }
//    return(length);
}
