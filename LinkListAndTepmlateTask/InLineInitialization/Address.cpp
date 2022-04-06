#include "Address.h"

Address::Address()
{
cout<<"Address constructor called "<<endl;
}
Address::~Address()
{
cout<<"Address destructor called "<<endl;
}

int Address::pin() const
{
    return m_pin;
}

void Address::setPin(int pin)
{
    m_pin = pin;
}

int Address::plot() const
{
    return m_plot;
}

void Address::setPlot(int plot)
{
    m_plot = plot;
}

string Address::city() const
{
    return m_city;
}

string Address::area() const
{
    return m_area;
}

void Address::setArea(const string area)
{
    m_area = area;
}

string Address::state() const
{
    return m_state;
}

void Address::setState(const string state)
{
    m_state = state;
}

void Address::setCity(const string city)
{
    m_city = city;
}

