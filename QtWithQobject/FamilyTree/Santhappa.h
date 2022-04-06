#ifndef SANTHAPPA_H
#define SANTHAPPA_H
#include<QDebug>
#include <QObject>

class Santhappa : public QObject
{
    Q_OBJECT
public:
    explicit Santhappa(QObject *parent = 0);

signals:

public slots:
};

#endif // SANTHAPPA_H
