#ifndef MYTYRE_H
#define MYTYRE_H

#include<QColor>
#include<QString>
#include<QObject>
class MyTyre
{
public:
    MyTyre();
    int tireNumber() const;
    void setTireNumber(int tireNumber);

    int pressure() const;
    void setPressure(int pressure);

    QString image() const;
    void setImage(const QString image);

    int width() const;
    void setWidth(int width);

    int radius() const;
    void setRadius(int radius);

    QString tireName() const;
    void setTireName(const QString tireName);

    QColor col() const;
    void setCol(const QColor &col);
    ~MyTyre();
private:
    int m_tireNumber;
    int m_pressure;
    QString m_image;
    int m_width;
    int m_radius;
    QString m_tireName;
    QColor m_col;
};

#endif // MYTYRE_H
