#ifndef BIKE_H
#define BIKE_H
#include<iostream>
using namespace std;


class Bike
{
public:
    Bike();
    ~Bike();
    string getname()const;
    void setname(const string name);
    string gettype()const;
    void settype(const string type);
    float getprice()const;
    void setprice(const float price);
    string getmodel()const;
    void setmodel(const string model);
    string getcolor()const;
    void setcolor(const string color);
    bool init();
    bool print();

private:
    string m_name;
    string m_model;
    string m_type;
    float m_price;
    string m_color;

};

#endif // BIKE_H
