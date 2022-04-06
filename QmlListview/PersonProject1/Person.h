#ifndef PERSON_H
#define PERSON_H
#include<QString>
#include<QObject>
class Person
{

public:
    Person();
    QString name() const;
    void setName(const QString &name);

    int getAge() const;
    void setAge(int value);

    QString getGender() const;
    void setGender(const QString &gender);

private:
    QString m_name;
    int age;
    QString m_gender;

};

#endif // PERSON_H
