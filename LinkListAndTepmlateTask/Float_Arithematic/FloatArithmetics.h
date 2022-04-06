#ifndef FLOATARITHMETICS_H
#define FLOATARITHMETICS_H
#include<iostream>
using namespace std;

class FloatArithmetics
{
    FloatArithmetics();
public:
    ~FloatArithmetics();
    FloatArithmetics(float a ,float b);
    void Addition();
    void Subtraction();
    void Multiplication();
    void Division();
    void print();
private:
    float m_num1;
    float m_num2;
};

#endif // FLOATARITHMETICS_H
