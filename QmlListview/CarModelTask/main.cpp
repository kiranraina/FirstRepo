#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
#include<CarModel.h>
#include<QObject>
#include<Car.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    CarModel *carmodel=new CarModel;
    carmodel->init();
    engine.rootContext()->setContextProperty("Carobj",carmodel);
//    carmodel->print();
//    qRegisterMetaType<Car*>();
//    qmlRegisterType<Car>("comps",1,0,"mycar");
    qmlRegisterUncreatableType<Car>("comps",1,0,"mycar","Irrancar-what are you doing??");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
