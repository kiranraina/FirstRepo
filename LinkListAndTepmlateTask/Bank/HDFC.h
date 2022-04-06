#ifndef HDFC_H
#define HDFC_H
#include"Commanutiles.h"
#include"RBI.h"
#include"Customer.h"
#include"CustomerLIst.h"
#include <ctime>
#include <cstdlib>

class HDFC : public RBI
{
    enum branch{
        rr_nagar=1,
        majestic=2,
        jaynagar=3
    };
public:
    HDFC();
    HDFC(Customer*,string);
    ~HDFC();
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
    HDFC *m_rr_nagar,*m_majestic,*m_jaynagar;
    static int m_acc;
};


#endif // HDFC_H
