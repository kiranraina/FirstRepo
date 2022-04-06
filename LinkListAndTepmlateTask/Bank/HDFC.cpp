#include "HDFC.h"
int HDFC::m_acc=100;
HDFC::HDFC():m_MaxTranfer(60),
    m_MinBalance(500),
    m_Withdraw(10000),
    m_SetFDRate(8)

{
    cout<<"HDFC constructor called"<<endl;
}
HDFC::HDFC(Customer*customer,string branchName)
{
    cout<<"HDFC parameter constructor called"<<endl;
    m_customerRefre=customer;
    m_branchname=branchName;

}
HDFC::~HDFC()
{
    cout<<"HDFC destructor called"<<endl;
    //   delete m_hdfc_customer;
    //   cout<<"m_hdfc_customer destructor called"<<endl;
}

void HDFC::init()
{
    cout<<"HDFC init called"<<endl;
    int branch;
    cout<<"Available Branch in HDFC"<<endl;
    cout<<"1.rr_nagar\n2.majestic \n3.jaynagra"<<endl;
    cout<<"choose which branch you wnat"<<endl;
    cin>>branch;
    switch(branch){
    case rr_nagar:
        m_hdfc_customer=new Customer;
        m_rr_nagar= new HDFC(m_hdfc_customer,"rr_nagar");
        m_rr_nagar->createAccount();
        break;
    case majestic:
        m_majestic= new HDFC(m_hdfc_customer,"m_majestic");
        m_majestic->createAccount();
        break;
    case jaynagar:
        m_jaynagar= new HDFC(m_hdfc_customer,"m_jaynagar");
        m_jaynagar->createAccount();
        break;
    default:
        cout<<"enter invalid number branch in HDFC"<<endl;
    }
}

void HDFC::Details()
{
    cout<<"HDFC Details called"<<endl;
    this->MaxTranfer();
    this->MinBalance();
    this->Withdraw();
    this->SetFDRate();
}

void HDFC::MaxTranfer()
{
    cout<<"HDFC MaxTranfer called  "<<m_MaxTranfer<<endl;
}

void HDFC::SetFDRate()
{
    cout<<"HDFC SetFDRate called  "<<m_SetFDRate<<endl;
}

void HDFC::Withdraw()
{
    cout<<"HDFC Withdraw called  "<<m_Withdraw<<endl;
}

void HDFC::MinBalance()
{
    cout<<"HDFC MinBalance called  "<<m_MinBalance<<endl;
}
void HDFC::createAccount(){

    cout<<"HDFC createAccount called  "<<endl;
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
    m_customerRefre->setAccount_no("HDFC0000"+to_string(++m_acc));
    m_customerRefre->print();
//    m_hdfc_customerLL=new CustomerLIst<HDFC>;
    m_hdfc_customerLL.Add(m_customerRefre);

}
void HDFC::deleteAccount(){

    cout<<"HDFC deleteAccount called  "<<endl;
}
void HDFC::credit(){

    cout<<"HDFC credit called  "<<endl;
}
void HDFC::debit(){

    cout<<"HDFC debit called  "<<endl;
}
void HDFC::display(){

    cout<<"HDFC display called  "<<endl;
}
