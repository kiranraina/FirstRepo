#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    int a;
    a=100;
     QString myname="friday";
    QQmlApplicationEngine engine;
     QQmlContext *cnt=engine.rootContext();


    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
