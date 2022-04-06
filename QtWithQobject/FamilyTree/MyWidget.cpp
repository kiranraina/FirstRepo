#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
     qDebug()<<Q_FUNC_INFO<<endl;
}

MyWidget::~MyWidget()
{
 qDebug()<<Q_FUNC_INFO<<endl;
}
