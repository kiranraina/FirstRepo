#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<NavigationModel.h>
#include<QQmlContext>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
     NavigationModel *navigation= new NavigationModel;
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("navi",navigation);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
