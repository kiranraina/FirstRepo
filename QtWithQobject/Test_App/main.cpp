#include "Widget.h"
#include <QApplication>
#include"QPushButton"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    QPushButton push("Monitor");
    push.show();

    return a.exec();
}
