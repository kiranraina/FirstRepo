#ifndef MYWIDGET_H
#define MYWIDGET_H
#include <QWidget>
#include<QDebug>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = 0);
    ~MyWidget();
    void dispaly(int);

};

#endif // MYWIDGET_H
