#ifndef RBI_H
#define RBI_H
#include"Commanutiles.h"

class RBI
{
public:
    RBI();
   virtual ~RBI();
   virtual void init();
   virtual void Details();
   virtual void MaxTranfer();
   virtual void SetFDRate();
   virtual void Withdraw();
   virtual void MinBalance();
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
};

#endif // RBI_H
