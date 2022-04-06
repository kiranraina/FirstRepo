#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"Commanutiles.h"
//#include"RBI.h"
//#include"HDFC.h"
//#include"SBI.h"
//#include"ICICI.h"

class Customer
{
public:
    Customer();
    ~Customer();
    void print();
    void init();
    string Getaccount_no() const;
    void setAccount_no(string account_no);

    int Getphone() const;
    void setPhone(int phone);

    int Getbalance() const;
    void setBalance(int balance);

    string Getname() const;
    void setName(const string name);

    string Getbranchname() const;
    void SetBranchname(const string branchname);

private:
    string m_account_no;
    string m_name;
    int m_phone;
    int m_balance;
    string m_branchname;

};

#endif // CUSTOMER_H
