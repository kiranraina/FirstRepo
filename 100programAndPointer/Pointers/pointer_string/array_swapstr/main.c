#include <stdio.h>
#include <string.h>

//int main(int argc, char *argv[])
//{
//    char *names[]={
//        "akshay",
//        "parag",
//        "raman",
//        "srinivas",
//        "gopal",
//        "rajesh"
//    };
//    char *temp;
//  printf("\n Original :%s %s",names[2],names[3]);
//  temp=names[2];
//  names[2]=names[3];
//  names[3]=temp;

//  printf("\n New:%s %s",names[2],names[3]);

//    return 0;
//}
int main(int argc, char *argv[])
{
    char *names[]={
        "akshay",
        "parag",
        "raman",
        "srinivas",
        "gopal",
        "rajesh"
    };
  char *temp;
  printf("**************1");
  printf("\n Original :%s %s",names[2],names[3]);
    printf("**************2");
  swap(&names[2],&names[3]);

  printf("\n New:%s %s",names[2],names[3]);

    return 0;
}
swap(char **s1,char**s2)
{
    char *t;
    t=*s1;
    *s1=*s2;
    *s2=t;
}

