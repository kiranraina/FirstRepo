#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "BELOpenGLCircle.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
qmlRegisterType<BELOpenGLCircle>("BELShapes",1,0,"BELCircle");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
