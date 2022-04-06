#ifndef ECGHARDWARE_H
#define ECGHARDWARE_H
#include<QDebug>
#include <QObject>
#include<ECGSensor.h>

class ECGHardware : public QObject
{
    Q_OBJECT
public:
    explicit ECGHardware(QObject *parent = 0);
~ECGHardware();
    void init();
private:
    ECGSensor *m_sensor[12];
signals:

public slots:
    void collectsensorData(int);
};

#endif // ECGHARDWARE_H
