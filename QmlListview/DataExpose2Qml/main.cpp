#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
#include<MyCARModel.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    int x=200;
    QString name="Money";
    MyCARModel *car=new MyCARModel;
    car->setCarname("audi");
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("myint",x);
    engine.rootContext()->setContextProperty("myString",name);
    engine.rootContext()->setContextProperty("Car",car);


    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
