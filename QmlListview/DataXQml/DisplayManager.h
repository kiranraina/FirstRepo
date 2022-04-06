#ifndef DISPLAYMANAGER_H
#define DISPLAYMANAGER_H
#include<QDebug>
#include <QObject>

class DisplayManager : public QObject
{
    Q_OBJECT
public:
    explicit DisplayManager(QObject *parent = 0);

signals:

public slots:
    void loginSucces();
    void loginFail();
};

#endif // DISPLAYMANAGER_H
