#include <iostream>
#include<KiranLinkList.h>
#include<Student.h>
using namespace std;

int main(int argc, char *argv[])
{
    Student s1;
    KiranLinkList<Student>kiran;
    s1.m_id=8;
    kiran.addQ(s1);
    Student s2;
    s2.m_id=7;
    kiran.addQ(s2);
    kiran.print();
    kiran.length();
    kiran.delQ();
    kiran.print();
    kiran.length();
    cout << "Hello World!" << endl;
    return 0;
}
