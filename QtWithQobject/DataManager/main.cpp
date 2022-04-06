#include "MyWidget.h"
#include <QApplication>
#include"DataManger.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    DataManger *data=new DataManger;
    data->fetchData();

    return a.exec();
}
