#ifndef DETAILSMODELS_H
#define DETAILSMODELS_H

#include<list>
#include<QDebug>
#include <QAbstractListModel>
#include <QObject>
#include <QString>
#include<Temperature.h>

class DetailsModels : public QAbstractListModel
{
     Q_OBJECT
public:
    DetailsModels();
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role)  const override;
    virtual QHash<int, QByteArray> roleNames() const;
    void init();
    QString cityName() const;
    void setCityName(const QString cityName);
private:
     QList<Temperature*>m_temperature;
     QString m_cityName;
};

#endif // DETAILSMODELS_H
