#include "MyWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w(10),w1(20);
    w.show();
    w.callMe();
    w1.callMe();


    return a.exec();
}
