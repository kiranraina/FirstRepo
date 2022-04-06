#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    qDebug()<<"MyWidget  constructor called "<<endl;
}

MyWidget::~MyWidget()
{
    qDebug()<<"MyWidget destructor called "<<endl;
}

void MyWidget::callMe()
{
     qDebug()<<"MyWidget callMe called "<<endl;
     auto f=[this](){
        qDebug()<<"lamda function called "<<m_data<<endl;
     };
     f();
}
MyWidget::MyWidget(int x):m_data(x)
{
qDebug()<<"MyWidget parameter constructor called "<<endl;
}
