#include "MyDisplay.h"

MyDisplay::MyDisplay(QObject *parent) : QObject(parent)
{
    qDebug()<<Q_FUNC_INFO<<"mydisplay constructor"<<endl;
}

void MyDisplay::Display(QString val)
{
   qDebug()<<"Display called" <<val<<endl;
}
