#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<MyAuth.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
qmlRegisterType<MyAuth>("BossComps",1,0,"BossAuth");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
