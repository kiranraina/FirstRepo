#include "ECGHardware.h"

ECGHardware::ECGHardware(QObject *parent) : QObject(parent)
{
    qDebug()<<Q_FUNC_INFO<<"ECGHardware constructor called"<<endl;
    init();
}

void ECGHardware::init()
{
    QString name="kiran";
   qDebug()<<Q_FUNC_INFO<<"ECGHardware init called"<<endl;
   for(int i=1;i<=12;i++){
       m_sensor[i]=new ECGSensor;
       qDebug()<<m_sensor[i]<<endl;
       m_sensor[i]->setObjectName(name+QString::number(i));
        QObject::connect(m_sensor[i],&ECGSensor::sensorSend,this,&ECGHardware::collectsensorData);
   }

}

void ECGHardware::collectsensorData(int val)
{
      qDebug()<<Q_FUNC_INFO<<"ECGHardware collectsensorData called"<<val<<endl;
      QObject *s=sender();
      if(s==nullptr){
          return;
      }
      qDebug()<<s->objectName()<<endl;
}
ECGHardware::~ECGHardware()
{
  qDebug()<<Q_FUNC_INFO<<"ECGHardware destructor called"<<endl;
}
