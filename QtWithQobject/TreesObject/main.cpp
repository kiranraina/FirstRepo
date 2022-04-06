#include "MyWidget.h"
#include <QApplication>
#include<QList>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.setObjectName("Basappa");

    MyWidget *c1=new MyWidget(&w);
    c1->setObjectName("Anadappa");

    MyWidget *c2=new MyWidget(&w);
    c2->setObjectName("Anasamma");

    MyWidget *c3=new MyWidget(&w);
    c3->setObjectName("Phakirappa");

    w.dumpObjectTree();


    QList<QObject*>childs=w.children();
    for(int i=0;i<childs.size();i++){
        QObject *qt=childs[i];
       qDebug()<<qt->objectName()<<endl;
    }
    QObject *name=w.findChild<QObject*>("Anadappa");
   qDebug()<<name->objectName()<<endl;
    w.show();

    return a.exec();
}
