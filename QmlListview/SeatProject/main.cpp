#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
#include<MySeatModel.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    MySeatModel *seat=new MySeatModel;
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("Seat",seat);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
