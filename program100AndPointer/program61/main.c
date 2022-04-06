/*C Program a structure which reads ‘n’ students information (name,3 subjects marks) and calculate
total marks, result print them in a particular format.*/

#include <stdio.h>
struct student
{
    char name[20];
    int sub1,sub2,sub3;
};

int main(int argc, char *argv[])
{
    int n,m;
    printf("Enter the students\n");
    scanf("%d",&n);
    int total[n];
    struct student s[n];
    for(int i=0;i<n;i++){
       printf("enter student sub 1\n");
       scanf("%d",&s[i].sub1);
       printf("enter student sub 2\n");
       scanf("%d",&s[i].sub2);
       printf("enter student sub 3\n");
       scanf("%d",&s[i].sub3);
       printf("enter student name\n");
       scanf( "%c",&s[i].name);
       fgets(s[i].name,10,stdin);
       total[i]+=s[i].sub1+s[i].sub2+s[i].sub3;
    }
    printf("print statement \n");
       for(int i=0;i<n;i++){
             puts(s[i].name);
             printf("student sub1=%d\n",s[i].sub1);
             printf("student sub2=%d\n",s[i].sub2);
             printf("student sub3=%d\n",s[i].sub3);
             printf("student total=%d\n",total[i]);
       }

    return 0;
}
