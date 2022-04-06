#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "BEL_Ellipse.h"
#include "BEL_Circle.h"
#include "BEL_Line.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<BEL_Ellipse>("BELShapes",1,0,"BELEllipse");
    qmlRegisterType<BEL_Line>("BELShapes",1,0,"BELLine");
    qmlRegisterType<BEL_Circle>("BELShapes",1,0,"BELCircle");
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
