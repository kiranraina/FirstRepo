#include "BankManagement.h"

BankManagement::BankManagement()
{
    cout<<"BankManagement constructor called"<<endl;
}
BankManagement::~BankManagement()
{
    cout<<"BankManagement destructor called"<<endl;

}

void BankManagement::selectBank()
{
    cout<<"BankManagement selectBank called"<<endl;
    int Bank;
    cout<<"Available bank"<<endl;
    cout<<"1.HDFC bank\n2.ICICI bank\n3.SBI bank"<<endl;
    cout<<"Choose which bank you want"<<endl;
    cin>>Bank;
    RBI *r1;
    switch(Bank){
    case hdfc:
        r1= new HDFC();
        r1->init();
        break;
    case icici:
        r1= new ICICI();
        r1->init();
        break;
    case sbi:
        r1= new SBI();
        r1->init();
        break;
    default:
        cout<<"entered invalid bank"<<endl;
    }
}
void BankManagement::accountconfimation()
{
    cout<<"BankManagement accountconfimation"<<endl;
    cout<<"Want to add creat another account"<<endl;
}


