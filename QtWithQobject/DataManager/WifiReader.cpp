#include "WifiReader.h"

WifiReader::WifiReader()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
WifiReader::~WifiReader()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
void WifiReader::startReading()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    emit readingStarted();
    QThread::sleep(10);
    emit readComplete();

}
