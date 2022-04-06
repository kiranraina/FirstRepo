#include <stdio.h>
#include <string.h>
#define FOUND 1
#define NOTFOUND 0

int main(int argc, char *argv[])
{
    char masterlist[6][10]={
        "akshay",
        "parag",
        "raman",
        "srinivas",
        "gopal",
        "rajesh"
    };
    int i,flag,a;
    char yourname[10];
//    printf("enter the value\n");
//    for(i=0;i<=5;i++){
//        scanf("%s",&masterlist[i][0]);
//    }

    printf("\nEnter your name\n");
    scanf("%s",yourname);
    flag=NOTFOUND;
    for(i=0;i<=5;i++)
    {
        a=strcmp(&masterlist[i][0],yourname);
        if(a==0)
        {
            printf("Welcome,you can enter the palace");
            flag=FOUND;
            break;
        }
    }
    if(flag==NOTFOUND)
    {
        printf("Sorry,you are a trespasser");
    }
    return 0;
}
