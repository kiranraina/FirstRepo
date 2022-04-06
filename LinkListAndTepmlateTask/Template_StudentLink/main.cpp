#include <iostream>
#include<StudentLinkList.h>
#include<Student.h>
using namespace std;

int main(int argc, char *argv[])
{
    Student student;
    StudentLinkList<Student> *students=new StudentLinkList<Student>;
    struct Node<Student> *m_p;
     m_p=nullptr;
     student.m_name="kiran";
     student.m_Roll="ab12";
     student.m_sem=5;

     students->append(&m_p,student);
     students->display(m_p);
//     student.append(&m_p,"john","a12",5);
//     student.append(&m_p,"kiran","s11",6);
//     student.display(m_p);
//    cout << "Hello World!" << endl;
    return 0;
}
