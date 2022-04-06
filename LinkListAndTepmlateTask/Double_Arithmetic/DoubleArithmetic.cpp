#include "DoubleArithmetic.h"

DoubleArithmetic::DoubleArithmetic()
{
cout<<"DoubleArithmetic constructor called"<<endl;
}
DoubleArithmetic::DoubleArithmetic(double a,double b):m_num1(a),
    m_num2(b)
{
cout<<"DoubleArithmetic parameter constructor called"<<endl;
this->print();
}
DoubleArithmetic::~DoubleArithmetic()
{
cout<<"DoubleArithmetic destructor called"<<endl;
}
void DoubleArithmetic::Addition()
{
     cout<<"DoubleArithmetic Addition called"<<endl;
      cout<<"Addition of numbers "<<m_num1+m_num2<<endl;
}

void DoubleArithmetic::Subtraction()
{
     cout<<"DoubleArithmetic Subtraction called"<<endl;
      cout<<"Subtraction of numbers "<<m_num1-m_num2<<endl;
}

void DoubleArithmetic::Multiplication()
{
     cout<<"DoubleArithmetic Multiplication called"<<endl;
      cout<<"Multiplication of numbers "<<m_num1*m_num2<<endl;
}

void DoubleArithmetic::Division()
{
   cout<<"DoubleArithmetic Division called"<<endl;
    cout<<"Division of numbers "<<m_num1/m_num2<<endl;
}

void DoubleArithmetic::print()
{
     cout<<"DoubleArithmetic print called"<<endl;
     this->Addition();
     this->Subtraction();
     this->Multiplication();
     this->Division();

}

