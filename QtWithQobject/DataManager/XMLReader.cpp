#include "XMLReader.h"

XMLReader::XMLReader()
{
   qDebug()<<Q_FUNC_INFO<<endl;
}
XMLReader::~XMLReader()
{
   qDebug()<<Q_FUNC_INFO<<endl;
}
void XMLReader::startReading()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    emit readingStarted();
    QThread::sleep(10);
    emit readComplete();

}
