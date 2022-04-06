#ifndef CAR_H
#define CAR_H
#include<QDebug>
#include <QObject>
#include<QString>

class Car
{
public:
    Car();
    QString carModel() const;
    void setCarModel(const QString carModel);

    QString image() const;
    void setImage(const QString image);

    int id() const;
    void setId(const int id);

private:
    QString m_carModel;
    QString m_image;
    int m_id;
};

#endif // CAR_H
