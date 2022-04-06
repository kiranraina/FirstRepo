#ifndef NAVIGATIONMODEL_H
#define NAVIGATIONMODEL_H
#include<QDebug>
#include <QObject>

class NavigationModel : public QObject
{
    Q_OBJECT
public:
    Q_INVOKABLE void callMe();
    explicit NavigationModel(QObject *parent = 0);

signals:
    void loadNext(QString url);

public slots:
};

#endif // NAVIGATIONMODEL_H
