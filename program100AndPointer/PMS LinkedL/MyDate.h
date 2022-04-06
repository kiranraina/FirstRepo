#ifndef MYDATE_H
#define MYDATE_H
#include <iostream>
using namespace std;

class MyDate
{
public:
    MyDate();
    MyDate(int date,int month,int year);
    int getdate() const;
    void setDate(int Date);

    int getmonth() const;
    void setMonth(int Month);

    int getyear() const;
    void setYear(int Year);

    bool print();

private:
    int m_date;
    int m_month;
    int m_year;
};

#endif // MYDATE_H
