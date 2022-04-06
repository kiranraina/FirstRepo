#ifndef CHAMAPPA_H
#define CHAMAPPA_H
#include<QDebug>
#include <QObject>


class Chamappa : public QObject
{
    Q_OBJECT
public:
    explicit Chamappa(QObject *parent = 0);
private:

signals:

public slots:
};

#endif // CHAMAPPA_H
