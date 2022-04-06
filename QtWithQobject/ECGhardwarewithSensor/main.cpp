#include "MyWidget.h"
#include <QApplication>
#include"ECGHardware.h"
#include"ECGSensor.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    ECGHardware *ECG=new ECGHardware;
    ECG->collectsensorData(10);



    return a.exec();
}
