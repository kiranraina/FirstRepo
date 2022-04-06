#include "SBI.h"
int SBI::m_acc=800;
SBI::SBI():m_MaxTranfer(60),
    m_MinBalance(1500),
    m_Withdraw(15000),
    m_SetFDRate(5)
{
    cout<<"SBI constructor called"<<endl;

}

SBI::SBI(Customer *customer,string branchName)
{
    cout<<"SBI parameter constructor called"<<endl;
    m_customerRefre=customer;
    m_branchname=branchName;
}
SBI::~SBI()
{
    cout<<"SBI destructor called"<<endl;
//    delete m_sbi_customer;
//     cout<<"m_sbi_customer destructor called"<<endl;
}

void SBI::init()
{
    cout<<"SBI init called"<<endl;
//    m_sbi_customer->init();
    int branch;
    cout<<"Available Branch in ICICI"<<endl;
    cout<<"1.rr_nagar\n2.majestic \n3.jaynagra"<<endl;
    cout<<"choose which branch you wnat"<<endl;
    cin>>branch;
    m_sbi_customer=new Customer;
    switch(branch){
    case rr_nagar:
            m_rr_nagar= new SBI(m_sbi_customer,"rr_nagar");
             m_rr_nagar->createAccount();
            break;
    case majestic:
            m_majestic= new SBI(m_sbi_customer,"m_majestic");
             m_majestic->createAccount();
            break;
    case jaynagar:
            m_jaynagar= new SBI(m_sbi_customer,"m_jaynagar");
             m_jaynagar->createAccount();
            break;
    default:
        cout<<"enter invalid number brach in sbi"<<endl;
    }
}

void SBI::Details()
{
     cout<<"SBI Details called"<<endl;
     this->MaxTranfer();
     this->MinBalance();
     this->SetFDRate();
     this->Withdraw();
}
void SBI::MaxTranfer()
{
    cout<<"SBI MaxTranfer called  "<<m_MaxTranfer<<endl;
}

void SBI::SetFDRate()
{
    cout<<"SBI SetFDRate called  "<<m_MinBalance<<endl;
}

void SBI::Withdraw()
{
    cout<<"SBI Withdraw called  "<<m_Withdraw<<endl;
}

void SBI::MinBalance()
{
    cout<<"SBI MinBalance called  "<<m_MinBalance<<endl;
}
void SBI::createAccount(){

    cout<<"SBI createAccount called  "<<endl;
    int phone;
    string name;
    cout<<"Enter the customer's name"<<endl;
    cin>>name;
    cout<<"Enter the customer's phone"<<endl;
    cin>>phone;
//    cout<<"Enter the customer balance"<<endl;
//    cin>>balance;

    m_customerRefre->setName(name);
    m_customerRefre->setPhone(phone);
    m_customerRefre->setBalance(10000);
    m_customerRefre->SetBranchname(m_branchname);
    m_customerRefre->setAccount_no("SBI0000"+to_string(++m_acc));
    m_customerRefre->print();
   m_sbi_customerLL.Add(m_customerRefre);
}
void SBI::deleteAccount(){

     cout<<"SBI deleteAccount called  "<<endl;
}
void SBI::credit(){

   cout<<"SBI credit called  "<<endl;
}
void SBI::debit(){

   cout<<"SBI debit called  "<<endl;
}
void SBI::display(){

   cout<<"SBI display called  "<<endl;
}
