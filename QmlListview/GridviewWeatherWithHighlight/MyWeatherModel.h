#ifndef MYWEATHERMODEL_H
#define MYWEATHERMODEL_H
#include<list>
#include<QDebug>
#include <QAbstractListModel>
#include <QObject>
#include <QString>
#include <QObject>
#include<MyWeather.h>
class MyWeatherModel : public QAbstractListModel
{
    Q_OBJECT
public:
    MyWeatherModel();
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role)  const override;
    virtual QHash<int, QByteArray> roleNames() const;
    void init();
    Q_INVOKABLE  MyWeather *getTemp(int ind );

    QString getCityName() const;
    void setCityName(const QString &cityName);

private:
    QList<MyWeather*>m_weather;
    QString m_cityName;
};

#endif // MYWEATHERMODEL_H
