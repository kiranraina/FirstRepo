#ifndef MADAPPA_H
#define MADAPPA_H
#include<QDebug>
#include <QObject>

class Madappa : public QObject
{
    Q_OBJECT
public:
    explicit Madappa(QObject *parent = 0);

signals:

public slots:
};

#endif // MADAPPA_H
