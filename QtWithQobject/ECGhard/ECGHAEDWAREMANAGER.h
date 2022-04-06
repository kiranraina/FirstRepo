#ifndef ECGHAEDWAREMANAGER_H
#define ECGHAEDWAREMANAGER_H
#include"QDebug"
#include <QObject>

class ECGHAEDWAREMANAGER : public QObject
{
    Q_OBJECT
public:
    explicit ECGHAEDWAREMANAGER(QObject *parent = 0);
  void StartCollectingData();
signals:
    void dComplete(QString);
private:
  void dataCollected(int);
public slots:
};

#endif // ECGHAEDWAREMANAGER_H
