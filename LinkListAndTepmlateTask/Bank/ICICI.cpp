#include "ICICI.h"
int ICICI::m_acc=200;
ICICI::ICICI():m_MaxTranfer(20),
    m_MinBalance(1000),
    m_Withdraw(20000),
    m_SetFDRate(10)
{
    cout<<"ICICI constructor called"<<endl;
}
ICICI::ICICI(Customer*customer,string branchName)
{
  cout<<"ICICI parameter constructor called"<<endl;
m_customerRefre=customer;
m_branchname=branchName;
}
ICICI::~ICICI()
{
    cout<<"ICICI destructor called"<<endl;
//    delete m_ici_customer;
//    cout<<"m_ici_customer destructor called"<<endl;
}

void ICICI::init()
{
     cout<<"ICICI init called"<<endl;
     int branch;
     cout<<"Available Branch in ICICI"<<endl;
     cout<<"1.rr_nagar\n2.majestic \n3.jaynagra"<<endl;
     cout<<"choose which branch you wnat"<<endl;
     cin>>branch;
     m_ici_customer=new Customer;
     switch(branch){
     case rr_nagar:
             m_rr_nagar= new ICICI(m_ici_customer,"rr_nagar");
             m_rr_nagar->createAccount();
             break;
     case majestic:
             m_majestic= new ICICI(m_ici_customer,"m_majestic");
             m_majestic->createAccount();
             break;
     case jaynagar:
             m_jaynagar= new ICICI(m_ici_customer,"m_jaynagar");
             m_jaynagar->createAccount();
             break;
     default:
         cout<<"enter invalid number brach in icici"<<endl;
     }

}
void ICICI::MaxTranfer()
{
    cout<<"ICICI MaxTranfer called  "<<m_MaxTranfer<<endl;
}

void ICICI::SetFDRate()
{
    cout<<"ICICI SetFDRate called  "<<m_SetFDRate<<endl;
}

void ICICI::Withdraw()
{
    cout<<"ICICI Withdraw called  "<<m_Withdraw<<endl;
}

void ICICI::MinBalance()
{
    cout<<"ICICI MinBalance called  "<<m_MinBalance<<endl;
}

void ICICI::Details()
{
    cout<<"ICICI Details"<<endl;
    this->MaxTranfer();
    this->MinBalance();
    this->SetFDRate();
    this->Withdraw();
}
void ICICI::createAccount(){

    cout<<"ICICI createAccount called  "<<endl;
    int phone;
    string name;
    cout<<"Enter the customer's name"<<endl;
    cin>>name;
    cout<<"Enter the customer's phone"<<endl;
    cin>>phone;
//    cout<<"Enter the customer's balance"<<endl;
//    cin>>balance;
//    cout<<"Enter the customer branch"<<endl;
//    cin>>branchname;
    m_customerRefre->setName(name);
    m_customerRefre->setPhone(phone);
    m_customerRefre->setBalance(10000);
    m_customerRefre->SetBranchname(m_branchname);
    m_customerRefre->setAccount_no("ICICI0000"+to_string(++m_acc));
    m_customerRefre->print();
    m_icic_customerLL.Add(m_customerRefre);
}
void ICICI::deleteAccount(){

     cout<<"ICICI deleteAccount called  "<<endl;
}
void ICICI::credit(){

   cout<<"ICICI credit called  "<<endl;
}
void ICICI::debit(){

   cout<<"ICICI debit called  "<<endl;
}
void ICICI::display(){

   cout<<"ICICI display called  "<<endl;
}
