#ifndef PHONE_H
#define PHONE_H
#include<iostream>
using namespace std;


class Phone
{
public:
    Phone();
    string brand() const;
    void setBrand(const string &brand);

    string color() const;
    void setColor(const string &color);

    float price() const;
    void setPrice(float price);
    void sendMessage();

    void addFeatures(string brand,string color);
    void addFeatures(float price, string brand,string color);

private:
    string m_brand,m_color;
    float m_price;


};

#endif // PHONE_H
