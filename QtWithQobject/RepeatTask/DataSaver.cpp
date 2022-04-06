#include "DataSaver.h"

DataSaver::DataSaver(QObject *parent) : QObject(parent)
{
 qDebug()<<"DataSaver constructor"<<endl;
}
void DataSaver::save(){

    qDebug()<<"DataSaver save"<<endl;

}

DataSaver::~DataSaver()
{
        qDebug()<<"DataSaver destructor calleds"<<endl;
}
