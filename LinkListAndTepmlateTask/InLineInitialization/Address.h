#ifndef ADDRESS_H
#define ADDRESS_H
#include<iostream>
using namespace std;

class Address
{
public:
    Address();
     ~Address();
    int pin() const;
    void setPin(int pin);

    int plot() const;
    void setPlot(int plot);

    string city() const;
    void setCity(const string city);

    string area() const;
    void setArea(const string area);

    string state() const;
    void setState(const string state);

private:
    int m_pin;
    int m_plot;
    string m_city;
    string m_area;
    string m_state;
};

#endif // ADDRESS_H
