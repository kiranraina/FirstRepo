#include "Person.h"

Person::Person()
{
    m_date = nullptr;
    cout<<"Person constructor created"<<endl;
    //    initECG();
}

bool Person::intit()
{
    int date;
    int month;
    int year;
    cout<<"Inside init function in Person"<<endl;

    cout<<"Enter Date of the person DOB:"<<endl;
    cin >> date;

    cout <<"Enter month of the person DOB"<<endl;
    cin >> month;

    cout <<"Enter year of the person DOB"<<endl;
    cin >> year;

    if(m_date == nullptr){
        m_date = new MyDate(date,month,year);
    }
    return true;
}

int Person::getId() const{
   cout << m_Id <<endl;
   return m_Id;
}

void Person::setId(const int id){
    m_Id = id;
}

bool Person::Print()
{
    cout<<"Person Id:"<<m_Id<<endl;
//    m_date->print();
    return true;
}

bool Person::initECG()
{
    m_system = new ECGSystem;
    m_ecgHardware->registerWithMe(m_system);
    m_ecgHardware->start();
    return true;
}

bool Person::registerECGHardware(ECGHardware *h)
{
    cout << "Register ECG Hardware is Called"<<endl;
    m_ecgHardware = h;
    m_ecgHardware->setStatus(true);
    ECGHardware ecg = *m_ecgHardware;
    return true;
}

bool Person::unregisterECGHardware()
{
    m_ecgHardware->setStatus(false);
    m_ecgHardware = nullptr;
    return true;
}

Person::~Person()
{
    cout<<"Distructor is created"<<endl;
}
