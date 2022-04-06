#include "MyWidget.h"
#include <QApplication>
#include"MYPlayerManager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    MYPlayerManager MM;

    return a.exec();
}
