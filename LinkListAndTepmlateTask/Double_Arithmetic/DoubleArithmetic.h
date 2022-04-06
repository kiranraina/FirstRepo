#ifndef DOUBLEARITHMETIC_H
#define DOUBLEARITHMETIC_H
#include<iostream>
using namespace std;

class DoubleArithmetic
{
    DoubleArithmetic();
public:
     DoubleArithmetic(double a, double b);
      ~DoubleArithmetic();
     void Addition();
     void Subtraction();
     void Multiplication();
     void Division();
     void print();
 private:
     double m_num1;
     double m_num2;
};

#endif // DOUBLEARITHMETIC_H
