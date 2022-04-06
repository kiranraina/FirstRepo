#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;

class Student
{
public:
    Student();
     Student(const Student &st);
//     Student operator ==(const Student &st);
    ~Student();
    void print();
    int m_id;
};
Student::Student()
{
    cout<<"Student constructor called"<<endl;
}

Student::Student(const Student &st)
{
     cout<<"Student copy constructor called"<<endl;
     this->m_id=st.m_id;
}

//Student Student::operator ==(const Student &st)
//{
//    cout<<"Student operator equal called"<<endl;
//    if(this->m_id==st.m_id){
//        return true;
//    }else{
//    return false;
//    }
//}

void Student::print()
{
    cout<<"Student print called"<<endl;
    cout<<m_id<<endl;
}

Student::~Student()
{
  cout<<"Student destructor called"<<endl;
}


#endif // STUDENT_H
