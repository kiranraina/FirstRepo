#include "MyWidget.h"
#include<QPushButton>
#include<QDebug>
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QPushButton *b1=new QPushButton("world");
    b.show();
}

MyWidget::~MyWidget()
{

}
