#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
     qDebug()<<"MyWidget constructor:"<<endl;
}

MyWidget::~MyWidget()
{
    qDebug()<<"MyWidget destrctor:"<<endl;
}

void MyWidget::dispaly(int x)
{
     qDebug()<<"Qprogressbar value:"<<x<<endl;
}
