#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
#include<MyBoshModel.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("mod",new MyBoshModel);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
