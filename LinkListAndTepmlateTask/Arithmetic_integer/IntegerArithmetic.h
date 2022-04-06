#ifndef INTEGERARITHMETIC_H
#define INTEGERARITHMETIC_H
#include<iostream>
using namespace std;

class IntegerArithmetic
{
public:
    IntegerArithmetic();
    ~IntegerArithmetic();
    void Addition(int x,int y );
    void Subtraction(int x ,int y);
    void Multiplication(int x ,int y);
    void Division(int x ,int y);
private:
    int m_num1;
    int m_num2;
};

#endif // INTEGERARITHMETIC_H
