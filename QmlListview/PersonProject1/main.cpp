#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<PersonModel.h>
#include<QQmlContext>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
     engine.rootContext()->setContextProperty("person",new PersonModel);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
