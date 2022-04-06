#include "RS232Reader.h"

RS232Reader::RS232Reader()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
RS232Reader::~RS232Reader()
{
  qDebug()<<Q_FUNC_INFO<<endl;
}
void RS232Reader::startReading()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    emit readingStarted();
    QThread::sleep(10);
    emit readComplete();

}
