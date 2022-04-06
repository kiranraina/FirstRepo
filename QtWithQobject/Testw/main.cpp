#include "MyWidget.h"
#include <QApplication>
#include"QPushButton"
#include"QCheckBox"
#include "QRadioButton"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;

        QPushButton *qpush=new QPushButton("kiran",&w);
        QPushButton *qpush1=new QPushButton("kumar",&w);
        QRadioButton *qradio =new QRadioButton("sri",&w);
        QCheckBox *qcheck= new QCheckBox("john",&w);
        qpush->setGeometry(0,0,100,100);
        qpush1->setGeometry(100,0,100,100);
        qradio->setGeometry(200,0,100,100);
        qcheck->setGeometry(300,0,100,100);
        w.setGeometry(300,100,100,100);
        w.resize(500,500);
        w.show();

    return a.exec();
}
