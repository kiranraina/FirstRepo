#ifndef ICICI_H
#define ICICI_H
#include"Commanutiles.h"
#include"RBI.h"
#include"Customer.h"
#include"CustomerLIst.h"
#include <ctime>
#include <cstdlib>

class ICICI : public RBI
{
    enum branch{
        rr_nagar=1,
        majestic=2,
        jaynagar=3
    };
public:
    ICICI();
    ICICI(Customer*,string);
    virtual ~ICICI();
    virtual void init();
    virtual void MaxTranfer();
    virtual void SetFDRate();
    virtual void Withdraw();
    virtual void MinBalance();
    virtual void Details();
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
    Customer *m_ici_customer;
    CustomerLIst<Customer> m_icic_customerLL;
    ICICI*m_rr_nagar,*m_majestic,*m_jaynagar;
    static int m_acc;
};

#endif // ICICI_H
