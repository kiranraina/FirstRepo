#include "Car.h"

Car::Car()
{
 qDebug()<<Q_FUNC_INFO<<endl;
}

QString Car::carModel() const
{
    return m_carModel;
}

void Car::setCarModel(const QString carModel)
{
    m_carModel = carModel;
}

QString Car::image() const
{
    return m_image;
}

void Car::setImage(const QString image)
{
    m_image = image;
}

int Car::id() const
{
    return m_id;
}

void Car::setId(const int id)
{
    m_id = id;
}
