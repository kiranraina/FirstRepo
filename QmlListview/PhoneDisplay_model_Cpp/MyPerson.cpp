#include "MyPerson.h"

MyPerson::MyPerson()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}

MyPerson::~MyPerson()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}

QString MyPerson::name() const
{
    return m_name;
}

void MyPerson::setName(const QString name)
{
    m_name = name;
}

QString MyPerson::phone() const
{
    return m_phone;
}

void MyPerson::setPhone(const QString phone)
{
    m_phone = phone;
}

QString MyPerson::email() const
{
    return m_email;
}

void MyPerson::setEmail(const QString email)
{
    m_email = email;
}
