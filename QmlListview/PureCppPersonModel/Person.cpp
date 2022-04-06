#include "Person.h"

Person::Person()
{
   qDebug()<<Q_FUNC_INFO<<endl;
}

QString Person::name() const
{
    return m_name;
}

void Person::setName(const QString name)
{
    emit NameChanged();
    m_name = name;
}

QString Person::gender() const
{
    return m_gender;
}

void Person::setGender(const QString gender)
{
    emit GenderChanged();
    m_gender = gender;
}

int Person::age() const
{
    return m_age;
}

void Person::setAge(int age)
{
    emit AgeChanged();
    m_age = age;
}

int Person::phone() const
{
    return m_phone;
}

void Person::setPhone(int phone)
{
    emit PhoneChanged();
    m_phone = phone;
}

int Person::getCount() const
{
    return m_count;
}

void Person::setCount(int count)
{
    m_count = count;
}




