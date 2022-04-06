#ifndef WEATHERMODEL_H
#define WEATHERMODEL_H
#include<list>
#include<QDebug>
#include <QAbstractListModel>
#include <QObject>
#include <QString>
#include<DetailsModel.h>
class WeatherModel : public QAbstractListModel
{

     Q_OBJECT
public:
    WeatherModel();
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role)  const override;
    virtual QHash<int, QByteArray> roleNames() const;
    void init();
    Q_INVOKABLE DetailsModel *getYou(int ind);

private:
    QList<DetailsModel*>m_city;
    QList<DetailsModel*>::iterator it;
};
#endif // WEATHERMODEL_H
