#include "DBReader.h"

DBReader::DBReader()
{
    qDebug()<<Q_FUNC_INFO<<endl;
}
DBReader::~DBReader()
{
    qDebug()<<Q_FUNC_INFO<<endl;
}
void DBReader::startReading()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    emit readingStarted();
    QThread::sleep(10);
    emit readComplete();

}
