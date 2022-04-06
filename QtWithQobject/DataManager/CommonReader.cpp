#include "CommonReader.h"

CommonReader::CommonReader(QObject *parent) : QObject(parent)
{
    qDebug()<<Q_FUNC_INFO<<endl;
}

CommonReader::~CommonReader()
{
    qDebug()<<Q_FUNC_INFO<<endl;
}

void CommonReader::startReading()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    emit readingStarted();
    QThread::sleep(10);
    emit readComplete();

}
