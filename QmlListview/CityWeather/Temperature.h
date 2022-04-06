#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include<QDebug>
#include <QObject>

class Temperature : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int temp READ getTempature )
//    Q_PROPERTY(int time READ time )
public:
    explicit Temperature(QObject *parent = 0);

    int id() const;
    void setId(int id);

    QString time() const;
    void setTime(QString time);

    int getTempature() const;
    void setTempature(int value);


    QString getImage() const;
    void setImage(const QString &image);

signals:

public slots:
private:

    int m_id;
    QString m_time;
    QString m_image;
    int Tempature;
};


#endif // TEMPERATURE_H
