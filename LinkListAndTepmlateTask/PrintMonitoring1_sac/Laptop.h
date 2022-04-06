#ifndef LAPTOP_H
#define LAPTOP_H
#include <iostream>
#include"Printer.h"
using namespace std;
#include "IPrinterandLap.h"
class Laptop:public IPrinterandLap
{
public:
    Laptop();
    void recevedata(int x);
    void initprinter();
    void start();
    void print();

private:
    Printer **m_printer;
};

#endif // LAPTOP_H
