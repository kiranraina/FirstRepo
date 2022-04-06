#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
//#include<QString>
using namespace std;
class Patient
{
public:
    Patient();
     ~Patient();
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

#endif // PATIENT_H
