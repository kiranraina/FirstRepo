#include "Students.h"

Students::Students()
{
    cout<<"Students Constructor called"<<endl;
    int n;
    cout<<"enter the n students"<<endl;
    cin>>n;
    struct student s[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the student name"<<endl;
//        cin>>s[i].name;
        cin.ignore();
        getline(cin,s[i].name);
        cout<<"Enter the student section"<<endl;
//        cin>>s[i].section;
        cin.ignore();
        getline(cin,s[i].section);
        cout<<"Enter the student roll"<<endl;
        cin>>s[i].roll;
        cout<<"Enter the student class"<<endl;
//        cin>>s[i]._class;
        cin.ignore();
        getline(cin,s[i].Class);

    }
    printf("print  student details\n");
    for(int i=0;i<n;i++){
        cout<<"Enter the student name"<<endl;
        cout<<s[i].name<<endl;
        cout<<"Enter the student section"<<endl;
        cout<<s[i].section<<endl;
        cout<<"Enter the student class"<<endl;
        cout<<s[i].Class<<endl;
        cout<<"Enter the student roll"<<endl;
        cout<<s[i].roll<<endl;
    }
}
Students::~Students()
{
    cout<<"Students destructor called";
}
