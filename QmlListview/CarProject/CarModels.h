#ifndef CARMODELS_H
#define CARMODELS_H
#include<list>
#include<QDebug>
#include<Car.h>
#include <QAbstractListModel>
#include <QObject>

class CarModels : public QAbstractListModel
{
    Q_OBJECT
public:
    CarModels();
Q_INVOKABLE QString getImage(int index);
        int rowCount(const QModelIndex &index) const override;
     QVariant data(const QModelIndex &index, int role)  const override;
       virtual QHash<int, QByteArray> roleNames() const;
     void init();
    private:
     QList<Car*>m_car;
     QList<Car*>::Iterator it;
};



#endif // CARMODELS_H
