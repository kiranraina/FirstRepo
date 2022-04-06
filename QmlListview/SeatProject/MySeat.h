#ifndef MYSEAT_H
#define MYSEAT_H
#include<QString>
#include <QObject>

class MySeat
{
public:
    MySeat();
    int shoulder() const;
    void setShoulder(int shoulder);

    int position() const;
    void setPosition(int position);

    int bolster() const;
    void setBolster(int bolster);

    QString image() const;
    void setImage(const QString image);

private:
    int m_shoulder;
    int m_position;
    int m_bolster;
    QString m_image;
};

#endif // MYSEAT_H
