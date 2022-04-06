//C Program to read data in 3 structures and print
#include <stdio.h>

struct person
{

    int age;
    char gender[10];
     char name[20];
};
struct person1
{

    int age;
    char gender[10];
    char name[20];
};
struct person2
{

    int age;
    char gender[10];
    char name[20];
};

int main(int argc, char *argv[])
{
    struct person p;
    struct person1 p1;
    struct person2 p2;

    printf("get person details\n");
    printf("enter person name\n");
    scanf(" %[^\n]s",&p.name);
//    fgets(p.name,20,stdin);
    printf("enter person age\n");
    scanf("%d",&p.age);
    printf("enter person gender\n");
    scanf(" %[^\n]s",&p.gender);
//    fgets(p.gender,10,stdin);

    printf("get person1 details\n");
    printf("enter person name\n");
    scanf(" %[^\n]s",&p1.name);
//     fgets(p1.name,20,stdin);
    printf("enter person age\n");
    scanf("%d",&p1.age);
    printf("enter person gender\n");
    scanf(" %[^\n]s",&p1.gender);
//    fgets(p1.gender,10,stdin);

    printf("get person2 details\n");
    printf("enter person name\n");
    scanf(" %[^\n]s",&p2.name);
//    fgets(p2.name,20,stdin);
    printf("enter person age\n");
    scanf(" %d",&p2.age);
    printf("enter person gender\n");
    scanf(" %[^\n]s",&p2.gender);

//    fgets(p2.gender,10,stdin);


    printf("print person statement\n");
    printf("person name=");
    puts(p.name);
    printf("\person age=%d\n",p.age);
    printf("person gender=%s\n",p.gender);
//    puts(p.gender);
    printf("\n");

    printf("print person1 statement\n");
    printf("person name=");
    puts(p1.name);
    printf("\person age=%d\n",p1.age);
     printf("person gender=%s\n",p1.gender);
//    puts(p1.gender);

    printf("\n");

    printf("print person2 statement\n");
    printf("person name=");
    puts(p2.name);
    printf("\person age=%d\n",p2.age);
    printf("person gender=%s\n",p2.gender);
//    puts(p2.gender);
    printf("\n");

    return 0;
}
