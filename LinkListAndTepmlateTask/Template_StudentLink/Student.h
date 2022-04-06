#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
class Student
{
public:
    Student(){}
    ~Student(){}
//    string GetName()const;
//    void SetName( const string name);
//    string GetRoll()const;
//    void SetRoll(const string roll);
//    int Getsem()const;
//    void Setsem(const int sem);

//private:
public:
    string m_Roll;
    string m_name;
    int m_sem;

    void Display()
    {
        cout<<"student Display called"<<endl;
        cout<<m_name<<endl;
        cout<<m_Roll<<endl;
        cout<<m_sem<<endl;
    }

};
//Student::Student()
//{
// cout<<"student constructor called"<<endl;
//}
//Student::~Student()
//{
//    cout<<"student destructor called"<<endl;
//}

//string Student::GetName()const {

//     cout<<"student GetName called"<<endl;
//     return m_name;
//}

//void Student::SetName(const string name){

//    cout<<"student SetName called"<<endl;
//    m_name=name;
//}
//string Student::GetRoll()const{

//    cout<<"student GetRoll called"<<endl;
//    return m_Roll;
//}
//void Student::SetRoll(const string roll){

//    cout<<"student SetRoll called"<<endl;
//    m_Roll=roll;
//}

//int Student::Getsem() const
//{
//    cout<<"student Getsem called"<<endl;
//       return m_sem;
//}

//void Student::Setsem(const int sem)
//{
//    cout<<"student Setsem called"<<endl;
//        m_sem=sem;
//}


#endif // STUDENT_H
