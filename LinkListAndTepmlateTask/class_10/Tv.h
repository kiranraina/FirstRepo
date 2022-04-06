#ifndef TV_H
#define TV_H
#include<iostream>
using namespace std;

class Tv
{
public:
    Tv();
    ~Tv();
    string getname()const;
    void setname(const string name);
    string getdisplaysize()const;
    void setdisplaysize(const string displaysize);
    string gettype()const;
    void settype(const string type);
    float getprice()const;
    void setprice(const float price);
    float getweight()const;
    void setweight(const float weight);
    bool print();
    bool init();
private:
    string m_name;
    string m_displaysize;
    string m_type;
    float m_price;
    float m_weight;
};

#endif // TV_H
