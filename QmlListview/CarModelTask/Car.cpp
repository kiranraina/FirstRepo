#include "Car.h"

Car::Car(QObject *parent) : QObject(parent)
{
    qDebug()<<Q_FUNC_INFO<<endl;
}
Car::~Car()
{
    qDebug()<<Q_FUNC_INFO<<endl;
}

void Car::init()
{
    qDebug()<<Q_FUNC_INFO<<endl;

}

void Car::print()
{
   qDebug()<<Q_FUNC_INFO<<endl;
}

QString Car::getname() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    return m_name;
}

QString Car::getcolor() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    return m_color;
}

void Car::setColor(const QString color)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    m_color = color;
    emit carColorChanged();
}

QString Car::getnumber() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    return m_number;

}

void Car::setNumber(const QString number)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    m_number = number;
    emit carNumberChanged();
}

void Car::setName(const QString name)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    m_name = name;
    emit carNameChanged();
}
