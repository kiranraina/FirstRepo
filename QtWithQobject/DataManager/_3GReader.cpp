#include "_3GReader.h"

_3GReader::_3GReader()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
_3GReader::~_3GReader()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
void _3GReader::startReading()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    emit readingStarted();
    QThread::sleep(10);
    emit readComplete();

}
