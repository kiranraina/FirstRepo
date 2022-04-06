#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QDebug>
void printAllObject(QObject *obj){
    qDebug()<<"I am coming here only"<<endl;
    QList<QObject*>childs=obj->children();
    foreach(QObject *o1,childs){
      qDebug()<<"Object name="<<o1->objectName()<<endl;
      printAllObject(o1);
      const QMetaObject *o2=o1->metaObject();
      qDebug()<<o2->className()<<endl;
    }
}
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
   // QList<QObject *> QQmlApplicationEngine::rootObjects() const
    QList<QObject*>objs=engine.rootObjects();
    foreach (QObject*obj, objs) {
        qDebug()<<"Object Name="<<obj->objectName()<<endl;
        QVariant col="green";
        QVariant wid=600;
        obj->setProperty("color",col);
        obj->setProperty("width",wid);
        printAllObject(obj);
    }
    qDebug()<<"before"<<endl;
    app.exec();
    qDebug()<<"after"<<endl;
    return 1;
}
