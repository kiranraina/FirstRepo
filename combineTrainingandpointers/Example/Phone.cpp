#include "Phone.h"

Phone::Phone()
{

}

string Phone::brand() const
{
    return m_brand;
}

void Phone::setBrand(const string &brand)
{
    m_brand = brand;
}

string Phone::color() const
{
    return m_color;
}

void Phone::setColor(const string &color)
{
    m_color = color;
}

float Phone::price() const
{
    return m_price;
}

void Phone::setPrice(float price)
{
    m_price = price;
}

void Phone::sendMessage()
{
    cout<<"phone";
}

void Phone::addFeatures(string brand, string color)
{
   cout<<"add features base";
}

void Phone::addFeatures(float price, string brand, string color)
{
    cout<<"add features 3";
}

