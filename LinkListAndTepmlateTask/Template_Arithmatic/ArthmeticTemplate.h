#ifndef ARTHMETICTEMPLATE_H
#define ARTHMETICTEMPLATE_H
#include<iostream>
using namespace std;
template<typename kiran,typename kumar>

class ArthmeticTemplate
{
public:
    ArthmeticTemplate();
    ~ArthmeticTemplate();
    void Addition(kiran x,kiran y );
    void Subtraction(kiran x ,kumar y);
    void Multiplication(kiran x ,kumar y);
    void Division(kiran x ,kumar y);
private:
    kiran m_num1;
    kumar m_num2;
};
template<typename kiran,typename kumar>
ArthmeticTemplate<kiran,kumar>::ArthmeticTemplate()
{
cout<<"ArthmeticTemplate constructor called"<<endl;
}


template<typename kiran,typename kumar>
ArthmeticTemplate<kiran,kumar>::~ArthmeticTemplate()
{
    cout<<"ArthmeticTemplate constructor called"<<endl;
}

template<typename kiran, typename kumar>
void ArthmeticTemplate<kiran,kumar>::Addition(kiran x, kiran y)
{
    cout<<"ArthmeticTemplate Addition called"<<endl;
        m_num1=x,m_num2=y;
        cout<<"Addition of numbers"<<m_num1+m_num2<<endl;
}


//template<typename kiran,typename kumar>
//void ArthmeticTemplate<kiran,kumar>::Addition(kiran x, kumar y)
//{
//     cout<<"ArthmeticTemplate Subtraction called"<<endl;
//     m_num1=x,m_num2=y;
//     cout<<"Subtraction of numbers"<<m_num1-m_num2<<endl;
//}


template<typename kiran,typename kumar>
void ArthmeticTemplate<kiran,kumar>::Subtraction(kiran x, kumar y)
{
     cout<<"ArthmeticTemplate Subtraction called"<<endl;
     m_num1=x,m_num2=y;
     cout<<"Subtraction of numbers"<<m_num1-m_num2<<endl;
}


template<typename kiran,typename kumar>
void ArthmeticTemplate<kiran,kumar>::Multiplication(kiran x, kumar y)
{
     cout<<"ArthmeticTemplate Multiplication called"<<endl;
     m_num1=x,m_num2=y;
     cout<<"Multiplication of numbers"<<m_num1*m_num2<<endl;
}


template<typename kiran,typename kumar>
void ArthmeticTemplate<kiran,kumar>::Division(kiran x, kumar y)
{
     cout<<"ArthmeticTemplate Division called"<<endl;
     m_num1=x,m_num2=y;
     cout<<"Division of numbers"<<m_num1/m_num2<<endl;
}


#endif // ARTHMETICTEMPLATE_H
