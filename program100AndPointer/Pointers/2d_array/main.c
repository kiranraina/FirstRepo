#include <stdio.h>

int main(int argc, char *argv[])
{
    int stu[5][2]={
        {234,3},
        {345,5},
        {564,4},
        {123,1},
        {789,4}
    },i,j;
    for(i=0;i<=4;i++){
        for(j=0;j<=1;j++){
            printf("%u\t",*(*(stu+i)+j));
        }
        printf("\n");
    }
    printf("%u\n",stu[0]);
    printf("%u",stu[1]);

    return 0;
}
