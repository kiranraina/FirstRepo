#include "Customer.h"

Customer::Customer()
{
  cout<<"Customer constructor called"<<endl;
}
Customer::~Customer()
{
    cout<<"Customer destructor called"<<endl;

}


void Customer::print()
{
    cout<<"customer acc  "<<m_account_no<<endl;
    cout<<"customer name  "<<m_name<<endl;
    cout<<"customer phone no  "<<m_phone<<endl;
    cout<<"customer branch  "<<m_branchname<<endl;
}

string Customer::Getaccount_no() const
{
     cout<<"Customer Getaccount_no called"<<endl;
    return m_account_no;
}

void Customer::setAccount_no(string account_no)
{
    cout<<"Customer setAccount_no called"<<endl;
    m_account_no = account_no;
}

int Customer::Getphone() const
{
    cout<<"Customer Getphone called"<<endl;
    return m_phone;
}

void Customer::setPhone(int phone)
{
    cout<<"Customer setPhone called"<<endl;
    m_phone = phone;
}

int Customer::Getbalance() const
{
    cout<<"Customer Getbalance called"<<endl;
    return m_balance;
}

void Customer::setBalance(int balance)
{
    cout<<"Customer setBalance called"<<endl;
    m_balance = balance;
}

string Customer::Getname() const
{
    cout<<"Customer Getname called"<<endl;
    return m_name;
}

void Customer::setName(const string name)
{
    cout<<"Customer setName called"<<endl;
    m_name = name;
}

string Customer::Getbranchname() const
{
     cout<<"Customer Getbranchname called"<<endl;
    return m_branchname;
}

void Customer::SetBranchname(const string branchname)
{
    cout<<"Customer SetBranchname called"<<endl;
    m_branchname = branchname;
}
void Customer::init(){
    cout<<"Customer init called"<<endl;
    cout<<"Enter the customer name"<<endl;
    cin>>m_name;
    cout<<"Enter the customer phone"<<endl;
    cin>>m_phone;
//    cout<<"Enter the customer balance"<<endl;
//    cin>>m_balance;
//    cout<<"Enter the customer branch"<<endl;
//    cin>>m_branchname;
}
