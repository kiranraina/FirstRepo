#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<Person.h>
#include<PersonModel.h>
#include<QQmlContext>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<Person>("MyPerson",1,0,"Person");
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("MyObj",new PersonModel);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
