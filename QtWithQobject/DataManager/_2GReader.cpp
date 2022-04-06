#include "_2GReader.h"

_2GReader::_2GReader()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
_2GReader::~_2GReader()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
void _2GReader::startReading()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    emit readingStarted();
    QThread::sleep(10);
    emit readComplete();

}
