#ifndef SOMAPPA_H
#define SOMAPPA_H
#include<QDebug>
#include <QObject>

class Somappa : public QObject
{
    Q_OBJECT
public:
    explicit Somappa(QObject *parent = 0);

signals:

public slots:
};

#endif // SOMAPPA_H
