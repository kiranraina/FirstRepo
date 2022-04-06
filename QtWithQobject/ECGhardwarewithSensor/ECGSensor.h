#ifndef ECGSENSOR_H
#define ECGSENSOR_H
#include<QDebug>
#include <QObject>
#include<QTimer>

class ECGSensor : public QObject
{
    Q_OBJECT
public:
    explicit ECGSensor(QObject *parent = 0);
    ~ECGSensor();
    void init();
    static int value;
     QTimer *t=new QTimer;
signals:
    void sensorSend(int);
public slots:
    void timercollect();
};

#endif // ECGSENSOR_H
