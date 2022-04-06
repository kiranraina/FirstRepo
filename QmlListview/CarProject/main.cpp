#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<CarModels.h>
#include<QQmlContext>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("car",new CarModels);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
