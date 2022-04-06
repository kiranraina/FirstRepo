#include <iostream>
#include<KiranLinkList.h>
#include"Student.h"
using namespace std;
//class Student;
int main(int argc, char *argv[])
{
//    Student *s1=new Student;
//    Node<Student>*m_head;
//    m_head=nullptr;
    KiranLinkList<Student> kiranLL;
//    cout<<&s1<<endl;

//    s1->m_id=3;
//    kiranLL.Add(s1);
//    Student *s2=new Student;
//    s2->m_id=4;
//     kiranLL.AddTop(s2);
//    Student *s3=new Student;
//    s3->m_id=5;
//     kiranLL.Add(s3);
//     Student *s9=new Student;
//     s9->m_id=15;
//     kiranLL.insert(s9,1);
    Student s4;
    s4.m_id=6;
     kiranLL.Add(s4);
    Student s5;
    s5.m_id=7;
     kiranLL.Add(s5);
    Student s6;
    s6.m_id=8;
     kiranLL.Add(s6);
    Student s8;
    s8.m_id=11;
    kiranLL.AddEnd(s8);
    Student s9;
    s9.m_id=15;
    kiranLL.insert(s9,2);
//    kiranLL.RemoveTop(s7);
    kiranLL.print();
    kiranLL.length();
    cout<<"Hello World!"<<endl;
    return 0;
}
