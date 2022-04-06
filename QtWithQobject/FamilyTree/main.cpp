#include "MyWidget.h"
#include <QApplication>
#include<Chamappa.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();

    return a.exec();
}
