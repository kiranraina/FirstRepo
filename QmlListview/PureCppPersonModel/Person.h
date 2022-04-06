#ifndef PERSON_H
#define PERSON_H
#include<QString>
#include<QObject>
#include<QDebug>
class Person:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString Name READ name WRITE setName NOTIFY NameChanged)
    Q_PROPERTY(QString Gender READ gender WRITE setGender NOTIFY GenderChanged)
    Q_PROPERTY(int  Age READ age WRITE setAge NOTIFY AgeChanged)
    Q_PROPERTY(int Phone READ phone WRITE setPhone NOTIFY PhoneChanged)
public:
    Person();

    QString name() const;
    void setName(const QString name);

    QString gender() const;
    void setGender(const QString gender);

    int age() const;
    void setAge(int age);

    int phone() const;
    void setPhone(int phone);

    int getCount()const;
    void setCount(int count);

signals:
    void NameChanged();
    void GenderChanged();
    void AgeChanged();
    void PhoneChanged();
private:
    QString m_name;
    QString m_gender;
    int m_age;
    int m_phone;
    int m_count;
};

#endif // PERSON_H
