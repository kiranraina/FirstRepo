#ifndef COMMONREADER_H
#define COMMONREADER_H
#include<QDebug>
#include <QObject>
#include<QThread>

class CommonReader : public QObject
{
    Q_OBJECT
public:
    explicit CommonReader(QObject *parent = 0);
    ~CommonReader();
   virtual void startReading();
signals:
  void readingStarted();
   void readComplete();
public slots:
};

#endif // COMMONREADER_H
