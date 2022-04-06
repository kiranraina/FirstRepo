#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QDebug>
#include"Address.h"

class Person : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString Name READ name WRITE setName NOTIFY NameChanged)
    Q_PROPERTY(QString Email READ email WRITE setEmail NOTIFY EmailChanged)
    Q_PROPERTY(QString Mobile READ mobile WRITE setMobile NOTIFY MobileChanged)
    Q_PROPERTY(QString Insta READ insta WRITE setInsta NOTIFY InstaChanged)
    Q_PROPERTY(Address *address READ address WRITE setAddress NOTIFY addressChanged)
public:
    explicit Person(QObject *parent = 0);
    ~Person();
    QString name()const;
    void setName(const QString &name);
    QString email()const;
    void setEmail(const QString &email);
    QString mobile()const;
    void setMobile(const QString &mobile);
    QString insta()const;
    void setInsta(const QString &insta);
    Address *address()const;
    void setAddress(Address *address);
signals:
    void NameChanged();
    void EmailChanged();
    void MobileChanged();
    void InstaChanged();
    void addressChanged();

public slots:
private:
    QString m_name;
    QString m_email;
    QString m_mobile;
    QString m_insta;
    Address *m_address;
};

#endif // PERSON_H
