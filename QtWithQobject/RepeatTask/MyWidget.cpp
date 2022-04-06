#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    qDebug()<<"MyWidget constructor called"<<endl;
    QTimer t;
    t.setInterval(1000);
    QObject::connect(&t,&QTimer::timeout,this,&MyWidget::Johnson);
    t.start();
}
MyWidget::~MyWidget()
{
    qDebug()<<"MyWidget destructor called"<<endl;
}
void MyWidget::Johnson(){
    qDebug()<<"Johnson called"<<endl;
}
