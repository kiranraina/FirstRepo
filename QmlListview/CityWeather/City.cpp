#include "City.h"

City::City(QObject *parent) : QObject(parent)
{
   qDebug()<<Q_FUNC_INFO<<endl;
}

QString City::cityName() const
{
    return m_cityName;
}

void City::setCityName(const QString cityName)
{
    m_cityName = cityName;
}


