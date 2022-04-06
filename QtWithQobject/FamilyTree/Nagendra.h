#ifndef NAGENDRA_H
#define NAGENDRA_H
#include<QDebug>
#include <QObject>

class Nagendra : public QObject
{
    Q_OBJECT
public:
    explicit Nagendra(QObject *parent = 0);

signals:

public slots:
};

#endif // NAGENDRA_H
