#ifndef MYPERSON_H
#define MYPERSON_H
#include<QString>
#include<QDebug>

class MyPerson
{
public:
    MyPerson();
    ~MyPerson();
    QString name() const;
    void setName(const QString name);

    QString phone() const;
    void setPhone(const QString phone);

    QString email() const;
    void setEmail(const QString email);

private:
    QString m_name;
    QString m_phone;
    QString m_email;
};

#endif // MYPERSON_H
