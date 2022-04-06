#ifndef BELCOMPANY_H
#define BELCOMPANY_H

#include <QObject>
#include<QDebug>
#include <QList>
#include"Person.h"

class BELCompany : public QObject
{
    Q_OBJECT
    //propert name READ method,WRITE method,signal
    Q_PROPERTY(QString uname READ name WRITE setName NOTIFY unameChanged)
public:
    explicit BELCompany(QObject *parent = nullptr);
    ~BELCompany();
    QString name()const;
    void setName(const QString &name);
    Q_INVOKABLE void printMe();
    Q_INVOKABLE Person* get(int i);
    Q_INVOKABLE int count();

    public slots:
    bool verify(QString u,QString p);

signals:
    void success();
    void fail();
    void send(QString data, int value);
    void unameChanged();

public:
    QString m_name;
    QList<Person*>m_list;
};

#endif // BELCOMPANY_H
