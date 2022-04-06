#ifndef LAPTOP_H
#define LAPTOP_H
#include<iostream>
using namespace std;

class Laptop
{
public:
    Laptop();
    ~Laptop();
    bool print();
    bool init();
    string getscreen() const;
    void setScreen(const string screen);

    string getkeyboard() const;
    void setKeyboard(const string keyboard);

    string getmouse() const;
    void setMouse(const string mouse);

    float getprice() const;
    void setPrice(float price);

    string getname() const;
    void setName(const string name);

private:
    string m_name;
    float m_price;
    string m_mouse;
    string m_keyboard;
    string m_screen;

};

#endif // LAPTOP_H
