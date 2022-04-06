#include "RBI.h"

RBI::RBI():m_MaxTranfer(200),
    m_MinBalance(2000),
    m_Withdraw(100000),
    m_SetFDRate(9)
{
cout<<"RBI constructor called"<<endl;
}
RBI::~RBI()
{
    cout<<"RBI destructor called"<<endl;
}

void RBI::init()
{
    cout<<"RBI init called"<<endl;
}

void RBI::Details()
{
     cout<<"RBI Details called"<<endl;
     this->MaxTranfer();
     this->MinBalance();
     this->SetFDRate();
     this->Withdraw();
}
void RBI::MaxTranfer()
{
    cout<<"RBI MaxTranfer called "<<endl;
}

void RBI::SetFDRate()
{
    cout<<"RBI SetFDRate called  "<<endl;
}

void RBI::Withdraw()
{
    cout<<"RBI Withdraw called  "<<endl;
}

void RBI::MinBalance()
{
    cout<<"RBI MinBalance called  "<<endl;
}
void RBI::createAccount(){

    cout<<"RBI createAccount called  "<<endl;
}
void RBI::deleteAccount(){

     cout<<"RBI deleteAccount called  "<<endl;
}
void RBI::credit(){

   cout<<"RBI credit called  "<<endl;
}
void RBI::debit(){

   cout<<"RBI debit called  "<<endl;
}
void RBI::display(){

   cout<<"RBI display called  "<<endl;
}


