#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<TyreModel.h>
#include<QQmlContext>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
   TyreModel *tyre=new TyreModel;
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("tyres",tyre);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
