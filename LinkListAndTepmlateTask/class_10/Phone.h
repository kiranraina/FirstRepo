#ifndef PHONE_H
#define PHONE_H
#include<iostream>
using namespace std;

class Phone
{
public:
    Phone();
    ~Phone();

    string getname()const;
    void setname(const string name);
    string gettype()const;
    void settype(const string type);
    string getdisplaysize()const;
    void setdisplaysize(const string displaysize);
    float getprice()const;
    void setprice(const float price);
    string getos()const;
    void setos(const string os);

    bool init();
    bool print();
    void operator=(const Phone& ph);

private:
   string m_name;
   string m_type;
   string m_displaysize;
   float m_price;
   string m_os;
};

#endif // PHONE_H
