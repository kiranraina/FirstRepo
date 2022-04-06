#include "NetworkReader.h"

NetworkReader::NetworkReader()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
NetworkReader::~NetworkReader()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
void NetworkReader::startReading()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    emit readingStarted();
    QThread::sleep(10);
    emit readComplete();

}
