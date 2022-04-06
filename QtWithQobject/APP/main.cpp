#include "MyWidget.h"
#include <QApplication>
#include<QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    QPushButton b("hello");
    b.show();
    return a.exec();
}
