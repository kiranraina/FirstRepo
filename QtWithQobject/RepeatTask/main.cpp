#include "MyWidget.h"
#include <QApplication>
#include "DataSaver.h"
#include<QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();

    QTimer t;
    t.setInterval(1000);

    DataSaver data;

    QObject::connect(&t,&QTimer::timeout,&data,&DataSaver::save);
//    t.start();
    return a.exec();
}
