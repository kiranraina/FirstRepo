#ifndef DATAMANGER_H
#define DATAMANGER_H
#include<QDebug>
#include <QObject>
#include"_2GReader.h"
#include"_3GReader.h"
#include"NetworkReader.h"
#include"WifiReader.h"
#include"XMLReader.h"
#include"RS232Reader.h"
#include"DBReader.h"
#include"CommonReader.h"

class DataManger : public QObject
{
    Q_OBJECT
public:
    explicit DataManger(QObject *parent = 0);
  ~DataManger();
private:
    _2GReader *m_2G_read;
    _3GReader *m_3G_read;
    NetworkReader *m_network;
    WifiReader *m_wifi;
    RS232Reader *m_RS232;
    XMLReader *m_xml;
    DBReader *m_Db;
    CommonReader *m_cRead;
signals:

public slots:
    void processingStarted();
    void readingStarted();
    void readComplete();
    void fetchData();
};

#endif // DATAMANGER_H
