#include "ECGSensor.h"
int ECGSensor::value=1;
ECGSensor::ECGSensor(QObject *parent) : QObject(parent)
{
    qDebug()<<Q_FUNC_INFO<<"ECGSensor constructor called"<<endl;
    init();
}
ECGSensor::~ECGSensor()
{
    qDebug()<<Q_FUNC_INFO<<"ECGSensor destructor called"<<endl;
}

void ECGSensor::init()
{
    qDebug()<<Q_FUNC_INFO<<"ECGSensor init called"<<endl;
    t->setInterval(1000);
    QObject::connect(t,&QTimer::timeout,this,&ECGSensor::timercollect);
    t->start();
}

void ECGSensor::timercollect()
{
    qDebug()<<Q_FUNC_INFO<<"ECGSensor timercollect called"<<endl;
     emit sensorSend(value);
     value++;
     t->stop();


}
