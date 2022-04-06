#ifndef CHAMAMMA_H
#define CHAMAMMA_H
#include <QObject>
#include<QDebug>
class Chamamma: public QObject
{
       Q_OBJECT
public:
    explicit Chamamma(QObject *parent = 0);
signals:

public slots:
};

#endif // CHAMAMMA_H
