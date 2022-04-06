#include "MyDate.h"

MyDate::MyDate()
{
    cout<<"My Date Constructor is created"<<endl;
}

MyDate::MyDate(int date, int month, int year)
{
    m_date = date;
    m_month = month;
    m_year = year;
}

int MyDate::getdate() const
{
    return m_date;
}

void MyDate::setDate(int Date)
{
    m_date = Date;
}

int MyDate::getmonth() const
{
    return m_month;
}

void MyDate::setMonth(int Month)
{
    m_month = Month;
}

int MyDate::getyear() const
{
    return m_year;
}

void MyDate::setYear(int Year)
{
    m_year = Year;
}

bool MyDate::print()
{
    cout << "Date of birth:"<<m_date<<"\t"<<"Month:"<<m_month<<"\t"<<"Year:"<<m_year<<endl;
    return true;
}
