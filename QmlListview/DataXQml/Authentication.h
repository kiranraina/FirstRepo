#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H
#include<QDebug>
#include <QObject>

class Authentication : public QObject
{
    Q_OBJECT
public:
    explicit Authentication(QObject *parent = 0);

//    Q_INVOKABLE void dispaly();

signals:
    void success();
    void fail();

public slots:
    void verify(QString u,QString p);
    void dispaly();
public:
    int m_value;
    int value() const;
    void setValue(int value);
};

#endif // AUTHENTICATION_H
