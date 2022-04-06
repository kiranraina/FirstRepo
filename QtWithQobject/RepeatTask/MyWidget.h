#ifndef MYWIDGET_H
#define MYWIDGET_H
#include<QDebug>
#include <QWidget>
#include<QTimer>
class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = 0);
    ~MyWidget();

public slots:
    void Johnson();
};

#endif // MYWIDGET_H
