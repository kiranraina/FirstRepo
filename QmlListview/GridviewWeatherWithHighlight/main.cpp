#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
#include<MyCityModel.h>
#include<MyWeather.h>
#include<MyWeatherModel.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("cityObj",new MyCityModel);
    qmlRegisterType<MyWeather>();
    qmlRegisterType<MyWeatherModel>();
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
