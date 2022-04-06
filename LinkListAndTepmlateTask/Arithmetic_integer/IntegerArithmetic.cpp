#include "IntegerArithmetic.h"

IntegerArithmetic::IntegerArithmetic()
{
cout<<"IntegerArithmetic constructor called"<<endl;
}

IntegerArithmetic::~IntegerArithmetic()
{
    cout<<"IntegerArithmetic destructor called"<<endl;
}

void IntegerArithmetic::Addition(int x,int y)
{
    m_num1=x,m_num2=y;
     cout<<"IntegerArithmetic Addition called"<<endl;
      cout<<"Addition of numbers "<<m_num1+m_num2<<endl;
}

void IntegerArithmetic::Subtraction(int x,int y)
{
     m_num1=x,m_num2=y;
     cout<<"IntegerArithmetic Subtraction called"<<endl;
      cout<<"Subtraction of numbers "<<m_num1-m_num2<<endl;
}

void IntegerArithmetic::Multiplication(int x,int y)
{
     m_num1=x,m_num2=y;
     cout<<"IntegerArithmetic Multiplication called"<<endl;
      cout<<"Multiplication of numbers "<<m_num1*m_num2<<endl;
}

void IntegerArithmetic::Division(int x,int y)
{ m_num1=x,m_num2=y;

   cout<<"IntegerArithmetic Division called"<<endl;
    cout<<"Division of numbers "<<m_num1/m_num2<<endl;
}


