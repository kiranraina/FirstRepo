#include <iostream>
#include<StudentList.h>
using namespace std;

int main(int argc, char *argv[])
{
    StudentList stu;
    struct Node *m_p;
     m_p=nullptr;
     stu.append(&m_p,"john","a12",5);
     stu.append(&m_p,"kiran","s11",6);
     stu.display(m_p);
//    cout << "Hello World!" << endl;
    return 0;
}
