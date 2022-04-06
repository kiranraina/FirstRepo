#include "Person.h"

Person::Person()
{

}

QString Person::name() const
{
    return m_name;
}

void Person::setName(const QString &name)
{
    m_name = name;
}

int Person::getAge() const
{
    return age;
}

void Person::setAge(int value)
{
    age = value;
}

QString Person::getGender() const
{
    return m_gender;
}

void Person::setGender(const QString &gender)
{
    m_gender = gender;
}
