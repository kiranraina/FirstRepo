#ifndef ICICIBRANCH_H
#define ICICIBRANCH_H
#include"ICICI.h"


class ICICIBranch:public ICICI

{
public:
    ICICIBranch();
    ~ ICICIBranch();
    virtual void init();
    virtual void Details();
    virtual void MaxTranfer();
    virtual void SetFDRate();
    virtual void Withdraw();
    virtual  void MinBalance();
    virtual void createAccount();
    virtual void deleteAccount();
    virtual void credit();
    virtual void debit();
    virtual void display();
private:
    int m_MaxTranfer;
    int m_MinBalance;
    int m_Withdraw;
    int m_SetFDRate;
    string m_branchname;
    Customer*m_customerRefre;
    Customer *m_hdfc_customer;
    CustomerLIst<Customer> m_hdfc_customerLL;
    ICICI *m_rr_nagar,*m_majestic,*m_jaynagar;
    static int m_acc;
};

#endif // ICICIBRANCH_H
