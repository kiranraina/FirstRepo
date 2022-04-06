#include "MyTyre.h"

MyTyre::MyTyre()
{

}

int MyTyre::tireNumber() const
{
    return m_tireNumber;
}

void MyTyre::setTireNumber(int tireNumber)
{
    m_tireNumber = tireNumber;
}

int MyTyre::pressure() const
{
    return m_pressure;
}

void MyTyre::setPressure(int pressure)
{
    m_pressure = pressure;
}

QString MyTyre::image() const
{
    return m_image;
}

void MyTyre::setImage(const QString image)
{
    m_image = image;
}

int MyTyre::width() const
{
    return m_width;
}

void MyTyre::setWidth(int width)
{
    m_width = width;
}

int MyTyre::radius() const
{
    return m_radius;
}

void MyTyre::setRadius(int radius)
{
    m_radius = radius;
}

QString MyTyre::tireName() const
{
    return m_tireName;
}

void MyTyre::setTireName(const QString tireName)
{
    m_tireName = tireName;
}

QColor MyTyre::col() const
{
    return m_col;
}

void MyTyre::setCol(const QColor &col)
{
    m_col = col;
}
