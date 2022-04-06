#include "Temperature.h"

Temperature::Temperature(QObject *parent) : QObject(parent)
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
int Temperature::id() const
{
    return m_id;
}

void Temperature::setId(int id)
{
    m_id = id;
}

QString Temperature::time() const
{
    return m_time;
}

void Temperature::setTime(QString time)
{
    m_time = time;
}

int Temperature::getTempature() const
{
    return Tempature;
}

void Temperature::setTempature(int value)
{
    Tempature = value;
}

QString Temperature::getImage() const
{
    return m_image;
}

void Temperature::setImage(const QString &image)
{
    m_image = image;
}

