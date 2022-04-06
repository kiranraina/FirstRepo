#ifndef ECGHARDWAREMANGER_H
#define ECGHARDWAREMANGER_H
#include<QDebug>
#include <QWidget>

class ECGHardwareManger : public QWidget
{
    Q_OBJECT

public:
    ECGHardwareManger(QWidget *parent = 0);
    ~ECGHardwareManger();
  void StartCollectingData();
};

#endif // ECGHARDWAREMANGER_H
