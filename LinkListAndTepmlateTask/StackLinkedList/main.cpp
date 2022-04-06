#include <iostream>
#include<KiranLinkList.h>
#include"Student.h"
using namespace std;
//class Student;
int main(int argc, char *argv[])
{
    Student s1;
//    Node<Student>*m_head;
//    m_head=nullptr;
    KiranLinkList<Student> kiranLL;
//    cout<<&s1<<endl;

    s1.m_id=4;
     kiranLL.push(s1);
     s1.m_id=4;
      Student s2;
       s2.m_id=40;
      kiranLL.push(s2);
     kiranLL.print();
    kiranLL.length();
    kiranLL.pop();
    kiranLL.print();
   kiranLL.length();
//    Student s4;
//    Student s5;
//    s5.m_id=7;
//     kiranLL.Add(s5);
//    Student s6;
//    s6.m_id=8;
//     kiranLL.Add(s6);
//    Student s7;
//    s7.m_id=9;
//    kiranLL.AddTop(s7);
//    Student s8;
//    s8.m_id=11;
//    kiranLL.AddEnd(s8);
//    Student s9;
//    s9.m_id=15;
//    kiranLL.insert(s9,2);
//    kiranLL.RemoveTop(s7);
    cout<<"Hello World!"<<endl;
    return 0;
}
