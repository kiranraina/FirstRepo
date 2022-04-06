#include "ECGHAEDWAREMANAGER.h"

ECGHAEDWAREMANAGER::ECGHAEDWAREMANAGER(QObject *parent) : QObject(parent)
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
void ECGHAEDWAREMANAGER::StartCollectingData(){
    qDebug()<<Q_FUNC_INFO<<endl;
    emit dComplete("200");
    dataCollected(200);
    qDebug()<<"Data collectong completed"<<endl;
}
void ECGHAEDWAREMANAGER::dataCollected(int){
     qDebug()<<Q_FUNC_INFO<<"Data complete "<<endl;
}

