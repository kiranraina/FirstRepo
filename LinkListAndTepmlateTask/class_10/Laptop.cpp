#include "Laptop.h"

Laptop::Laptop()
{
   cout<<"Lapton constructor called"<<endl;
}
Laptop::~Laptop()
{
   cout<<"Lapton destructor called"<<endl;
}
bool Laptop::init()
{
   cout<<"Lapton init called"<<endl;
    return true;
}
bool Laptop::print()
{
   cout<<"Lapton init called"<<endl;
   return true;
}

string Laptop::getscreen() const
{
    return m_screen;
}

string Laptop::getkeyboard() const
{
    return m_keyboard;
}

string Laptop::getmouse() const
{
    return m_mouse;
}

float Laptop::getprice() const
{
    return m_price;
}

void Laptop::setPrice(float price)
{
    m_price = price;
}

string Laptop::getname() const
{
    return m_name;
}

void Laptop::setName(const string name)
{
    m_name = name;
}

void Laptop::setMouse(const string mouse)
{
    m_mouse = mouse;
}

void Laptop::setKeyboard(const string keyboard)
{
    m_keyboard = keyboard;
}

void Laptop::setScreen(const string screen)
{
    m_screen = screen;
}
