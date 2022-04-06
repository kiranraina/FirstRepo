#include "MainWindow.h"
#include <QApplication>
#include "QDebug"
#include "QPushButton"
#include "QRadioButton"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
  QObject *object1=new QObject,*object2=new QObject;
  object1=object2;
  object1->setObjectName("kiran");
  object1->objectName();
  qDebug()<<object1->objectName()<<endl;
  QPushButton *b=new QPushButton("kiran");
  b->show();
  QRadioButton *r =new QRadioButton;
  r->show();

    return a.exec();
}
