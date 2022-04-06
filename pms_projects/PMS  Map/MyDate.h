#ifndef MYDATE_H
#define MYDATE_H

#include<iostream>
using namespace std;
class MyDate
{
public:
    MyDate();
//    MyDate(int x,int y);
    bool print();
    bool init();
    ~MyDate();

    int getDay()const;
    void setDay(const int day);

    string getMonth()const;
    void setMonth(const string month);

    int getYear()const;
    void setYear(const int year);
private:
    int m_day;
    string m_month;
    int m_year;
};

#endif // MYDATE_H
