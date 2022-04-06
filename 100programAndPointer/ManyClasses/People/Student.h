#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
//#include<QString>
using namespace std;
class Student
{
public:
    Student();
    ~Student();
private:
    string m_mobile;
    string m_laptop;
    string m_androidStudio;
    string m_cable;

    string m_usn;
    string m_name;
    string m_nickName;
    string m_age;
    string m_dob;
    string m_semester;
    string m_backlog;
    string m_xeroxnotes;
};

#endif // STUDENT_H
