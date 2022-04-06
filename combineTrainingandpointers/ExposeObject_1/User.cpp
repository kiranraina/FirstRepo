#include "User.h"

User::User(QObject *parent) : QObject(parent)
{

}

QString User::usn() const
{
    return m_usn;
}

void User::setUsn(const QString &usn)
{
    m_usn = usn;
}

QString User::name() const
{
    return m_name;
}

void User::setName(const QString &name)
{
    m_name = name;
}

QString User::phone() const
{
    return m_phone;
}

void User::setPhone(const QString &phone)
{
    m_phone = phone;
}

QString User::email() const
{
    return m_email;
}

void User::setEmail(const QString &email)
{
    m_email = email;
}
