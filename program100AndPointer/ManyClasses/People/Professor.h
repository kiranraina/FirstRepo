#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
//#include<QString>
using namespace std;
class Professor
{
public:
    Professor();
   ~ Professor();
private:
    string m_mobile;
    string m_laptop;
    string m_androidStudio;
    string m_cable;

    string m_EmpId;
    string m_name;
    string m_nickName;
    string m_age;
    string m_dob;
    string m_dept;
    string m_design;
};

#endif // PROFESSOR_H
