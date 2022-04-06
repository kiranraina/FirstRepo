#include "DataManger.h"

DataManger::DataManger(QObject *parent) : QObject(parent)
{
   qDebug()<<Q_FUNC_INFO<<endl;
   m_cRead= new CommonReader;
   m_2G_read=new _2GReader;
   m_3G_read= new _3GReader;
   m_network=new NetworkReader;
   m_wifi=new WifiReader;
   m_xml =new XMLReader;
   m_RS232= new RS232Reader;
   m_Db=new DBReader;
   connect(m_cRead,&CommonReader::readingStarted,this,&DataManger::readingStarted);
   connect(m_cRead,&CommonReader::readComplete,this,&DataManger::readComplete);

   connect(m_2G_read,&CommonReader::readingStarted,this,&DataManger::readingStarted);
   connect(m_2G_read,&CommonReader::readComplete,this,&DataManger::readComplete);

   connect(m_3G_read,&CommonReader::readingStarted,this,&DataManger::readingStarted);
   connect(m_3G_read,&CommonReader::readComplete,this,&DataManger::readComplete);

   connect(m_network,&CommonReader::readingStarted,this,&DataManger::readingStarted);
   connect(m_network,&CommonReader::readComplete,this,&DataManger::readComplete);

   connect(m_wifi,&CommonReader::readingStarted,this,&DataManger::readingStarted);
   connect(m_wifi,&CommonReader::readComplete,this,&DataManger::readComplete);

   connect(m_xml,&CommonReader::readingStarted,this,&DataManger::readingStarted);
   connect(m_xml,&CommonReader::readComplete,this,&DataManger::readComplete);

   connect(m_RS232,&CommonReader::readingStarted,this,&DataManger::readingStarted);
   connect(m_RS232,&CommonReader::readComplete,this,&DataManger::readComplete);

   connect(m_Db,&CommonReader::readingStarted,this,&DataManger::readingStarted);
   connect(m_Db,&CommonReader::readComplete,this,&DataManger::readComplete);

}

DataManger::~DataManger()
{
    qDebug()<<Q_FUNC_INFO<<endl;
}

void DataManger::processingStarted()
{
      qDebug()<<Q_FUNC_INFO<<endl;
}

void DataManger::readingStarted()
{
      qDebug()<<Q_FUNC_INFO<<"read started"<<endl;
}

void DataManger::readComplete()
{
      qDebug()<<Q_FUNC_INFO<<"read Complete"<<endl;
}

void DataManger::fetchData()
{
      qDebug()<<Q_FUNC_INFO<<endl;
      m_wifi->startReading();
      m_2G_read->startReading();
      m_3G_read->startReading();
      m_network->startReading();
      m_xml->startReading();
      m_RS232->startReading();
      m_Db->startReading();


}
