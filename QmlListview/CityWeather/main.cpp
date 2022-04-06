#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
#include<WeatherModel.h>
#include<DetailsModel.h>
#include<Temperature.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
     engine.rootContext()->setContextProperty("weather1",new WeatherModel);
     qmlRegisterType<Temperature>();
     qmlRegisterType<DetailsModel>();
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
