#include "MyWeather.h"

MyWeather::MyWeather(QObject *parent) : QObject(parent)
{
  qDebug()<<Q_FUNC_INFO<<endl;
}

int MyWeather::id() const
{
    return m_id;
}

void MyWeather::setId(int id)
{
    m_id = id;
}

QString MyWeather::time() const
{
    return m_time;
}

void MyWeather::setTime(const QString &time)
{
    m_time = time;
}

QString MyWeather::image() const
{
    return m_image;
}

void MyWeather::setImage(const QString &image)
{
    m_image = image;
}

int MyWeather::getTempature() const
{
    return Tempature;
}

void MyWeather::setTempature(int value)
{
    Tempature = value;
}
