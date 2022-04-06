#include "MyWidget.h"
#include <QApplication>
#include"QSlider"
#include"QProgressBar"
#include"QHBoxLayout"
#include"QDebug"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    QSlider *s=new QSlider;
    s->valueChanged(0);
    s->show();
    QProgressBar *p=new QProgressBar;
    p->setValue(0);
    p->show();
    QObject::connect(s,&QSlider::valueChanged,p,&QProgressBar::setValue);
    QObject::connect(p,&QProgressBar::valueChanged,&w,&MyWidget::dispaly);
    QHBoxLayout *h=new QHBoxLayout;
    h->addWidget(s);
    h->addWidget(p);
    w.setLayout(h);
    w.show();
    return a.exec();
}
