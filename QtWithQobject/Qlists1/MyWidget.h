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
    void init();
    void printAll();
    void print(int y);
private:
    std::list<int>list1,list2;
    std::list<int>::iterator it1;
    std::list<int>::iterator it2;
    int m_data1;
};

#endif // MYWIDGET_H
