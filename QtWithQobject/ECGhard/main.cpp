#include "MyWidget.h"
#include <QApplication>
#include"ECGHAEDWAREMANAGER.h"
#include"QPushButton"
#include"MyDisplay.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    QPushButton *b=new QPushButton("start");
    b->show();
    b->setWindowTitle("kiran");
 MyDisplay dis;

    ECGHAEDWAREMANAGER *ecg=new ECGHAEDWAREMANAGER;
    QObject::connect(ecg,&ECGHAEDWAREMANAGER::dComplete,b,&QPushButton::setWindowTitle,Qt::UniqueConnection);
     QObject::connect(ecg,&ECGHAEDWAREMANAGER::dComplete,&dis,&MyDisplay::Display,Qt::UniqueConnection);
     QObject::connect(ecg,&ECGHAEDWAREMANAGER::dComplete,&dis,&MyDisplay::Display,Qt::UniqueConnection);
     QObject::connect(ecg,&ECGHAEDWAREMANAGER::dComplete,&dis,&MyDisplay::Display,Qt::UniqueConnection);
     QObject::connect(ecg,&ECGHAEDWAREMANAGER::dComplete,&dis,&MyDisplay::Display,Qt::UniqueConnection);

    ecg->StartCollectingData();

    return a.exec();
}
