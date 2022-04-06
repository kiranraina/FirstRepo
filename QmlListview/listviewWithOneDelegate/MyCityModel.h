#ifndef MYCITYMODEL_H
#define MYCITYMODEL_H

#include<list>
#include<QDebug>
#include <QAbstractListModel>
#include <QObject>
#include <QString>
#include<MyWeatherModel.h>
class MyCityModel : public QAbstractListModel
{
       Q_OBJECT
public:
    MyCityModel();
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role)  const override;
    virtual QHash<int, QByteArray> roleNames() const;
    void init();
    Q_INVOKABLE MyWeatherModel *getYou(int ind);
private:
    QList<MyWeatherModel*>m_city;
    QList<MyWeatherModel*>::iterator it;
};

#endif // MYCITYMODEL_H
