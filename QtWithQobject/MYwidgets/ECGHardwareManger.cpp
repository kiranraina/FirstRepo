#include "ECGHardwareManger.h"

ECGHardwareManger::ECGHardwareManger(QWidget *parent)
    : QWidget(parent)
{
      qDebug()<<"ECGHardwareManger constructor"<<endl;
}

ECGHardwareManger::~ECGHardwareManger()
{
    qDebug()<<"ECGHardwareManger destructor"<<endl;
}

void ECGHardwareManger::StartCollectingData()
{
    qDebug()<<"ECGHardwareManger StartCollectingData"<<endl;
}
