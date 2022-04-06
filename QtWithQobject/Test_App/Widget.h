#ifndef WIDGET_H
#define WIDGET_H
#include"QPushButton"
#include <QWidget>
#include<QDebug>
class Widget : public QWidget
{
    QPushButton b("hello");
    b.show();
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
};

#endif // WIDGET_H
