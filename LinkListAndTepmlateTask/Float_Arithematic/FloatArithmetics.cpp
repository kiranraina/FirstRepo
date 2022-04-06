
#include "FloatArithmetics.h"

FloatArithmetics::FloatArithmetics()
{
cout<<"FloatArithmetics constructor called"<<endl;
}
FloatArithmetics::FloatArithmetics(float a,float b):m_num1(a),
    m_num2(b)
{
cout<<"FloatArithmetics  parameterconstructor called"<<endl;
this->print();
}
FloatArithmetics::~FloatArithmetics()
{
cout<<"FloatArithmetics destructor called"<<endl;
}

void FloatArithmetics::Addition()
{
     cout<<"FloatArithmetics Addition called"<<endl;
      cout<<"Addition of numbers "<<m_num1+m_num2<<endl;
}

void FloatArithmetics::Subtraction()
{
     cout<<"FloatArithmetics Subtraction called"<<endl;
      cout<<"Subtraction of numbers "<<m_num1-m_num2<<endl;
}

void FloatArithmetics::Multiplication()
{
     cout<<"FloatArithmetics Multiplication called"<<endl;
      cout<<"Multiplication of numbers "<<m_num1*m_num2<<endl;
}

void FloatArithmetics::Division()
{
   cout<<"FloatArithmetics Division called"<<endl;
    cout<<"Division of numbers "<<m_num1/m_num2<<endl;
}

void FloatArithmetics::print()
{
     cout<<"FloatArithmetics print called"<<endl;
     this->Addition();
     this->Subtraction();
     this->Multiplication();
     this->Division();

}
