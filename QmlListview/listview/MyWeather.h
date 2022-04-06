#ifndef MYWEATHER_H
#define MYWEATHER_H
#include<QDebug>
#include <QObject>

class MyWeather : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int temp READ getTempature)
    Q_PROPERTY(QString cimage READ image)
public:
    explicit MyWeather(QObject *parent = 0);

    int id() const;
    void setId(int id);

    QString time() const;
    void setTime(const QString &time);

    QString image() const;
    void setImage(const QString &image);

    int getTempature() const;
    void setTempature(int value);

signals:

public slots:
private:
    int m_id;
    QString m_time;
    QString m_image;
    int Tempature;
};

#endif // MYWEATHER_H
