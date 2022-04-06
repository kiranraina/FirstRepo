#ifndef CITY_H
#define CITY_H
#include<QDebug>
#include <QObject>

class City : public QObject
{
    Q_OBJECT
public:
    explicit City(QObject *parent = 0);

    QString cityName() const;
    void setCityName(const QString cityName);



signals:

public slots:
private:
    QString m_cityName;

};

#endif // CITY_H
