#ifndef SANAPPA_H
#define SANAPPA_H
#include<QDebug>
#include <QObject>

class Sanappa : public QObject
{
    Q_OBJECT
public:
    explicit Sanappa(QObject *parent = 0);

signals:

public slots:
};

#endif // SANAPPA_H
