#ifndef PUTTAPPA_H
#define PUTTAPPA_H
#include<QDebug>
#include <QObject>

class Puttappa : public QObject
{
    Q_OBJECT
public:
    explicit Puttappa(QObject *parent = 0);

signals:

public slots:
};

#endif // PUTTAPPA_H
