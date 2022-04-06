#ifndef ADDRESS_H
#define ADDRESS_H
#include <QObject>
#include<QDebug>

class Address
{
    Q_GADGET
    Q_PROPERTY(QString plot MEMBER m_plotNo)
    Q_PROPERTY(QString street MEMBER m_street)
    Q_PROPERTY(QString pin MEMBER m_pin)
public:
    Address();
    ~Address();
    Address(QString p,QString st,QString pn);

private:
    QString m_plotNo;
    QString m_street;
    QString m_pin;
};

#endif // ADDRESS_H
