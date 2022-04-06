#ifndef DETAILSMODEL_H
#define DETAILSMODEL_H

#include<list>
#include<QDebug>
#include <QAbstractListModel>
#include <QObject>
#include <QString>
#include<Temperature.h>
//#include<QObject>
class DetailsModel : public QAbstractListModel
{

    Q_PROPERTY(int currentTemp READ temp WRITE setTemp NOTIFY TempChanged)
public:
    DetailsModel();
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role)  const override;
    virtual QHash<int, QByteArray> roleNames() const;
    void init();
    QString cityName() const;
    void setCityName(const QString cityName);

    Q_INVOKABLE  Temperature *getTemp(int ind ){
        qDebug()<<ind<<endl;
        Temperature *temp=m_temperature.at(ind);
        return temp;
    }
    Q_INVOKABLE int sum(){
        qDebug()<<Q_FUNC_INFO<<endl;
        return 1;
    }

    int temp() const;
    void setTemp(int temp);
signals:
    void TempChanged();
private:
    QList<Temperature*>m_temperature;
     QList<Temperature*>::iterator it;
    QString m_cityName;
    int m_temp;
};

#endif // DETAILSMODEL_H
