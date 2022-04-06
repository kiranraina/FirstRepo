#ifndef PERSONMODEL_H
#define PERSONMODEL_H
#include<QDebug>
#include<QObject>
#include<list>
#include<Person.h>
class PersonModel:public QObject
{
    Q_OBJECT
public:
    PersonModel();
    void init();

    Q_INVOKABLE void test();


   Q_INVOKABLE int getIndex();
   Q_INVOKABLE Person *getData(int index);


private:
    QList<Person*>m_persons;
    QList<Person*>::iterator it;
};

#endif // PERSONMODEL_H
