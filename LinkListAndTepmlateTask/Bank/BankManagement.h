#ifndef BANKMANAGEMENT_H
#define BANKMANAGEMENT_H
#include <iostream>
#include<RBI.h>
#include<SBI.h>
#include<ICICI.h>
#include<HDFC.h>
using namespace std;

class BankManagement
{
public:
    BankManagement();
    ~BankManagement();
    void selectBank();
    void accountconfimation();


    enum Banks{
        hdfc=1,
        icici=2,
        sbi=3
    };
};

#endif // BANKMANAGEMENT_H
