#include <iostream>
#include <string.h>
using namespace std;
struct student{
    char name[7];
    int a;
};
int main(int argc, char *argv[])
{
    struct student s1={"kiran",2};
//    s1.name="kiran";
//    strcpy(s1.name,"Kiran");
    cout <<"name:"<<s1.name<< endl;
    cout <<"a:"<<s1.a<< endl;
//     cout <<"Enter name:"<< endl;
//    cin>>s1.name;
//    cout <<"name:"<<s1.name<< endl;
    return 0;
}
