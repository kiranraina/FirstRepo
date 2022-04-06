#ifndef MYWIDGET_H
#define MYWIDGET_H
#include<QDebug>
#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = 0);
    MyWidget(int x);
    ~MyWidget();
    void callMe();
private:
    int m_data;
};

#endif // MYWIDGET_H
