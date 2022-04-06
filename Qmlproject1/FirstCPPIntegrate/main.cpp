#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQmlContext>
#include "BELCompany.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterUncreatableType<Person>("",1,0,"","");
    int a;
    a=100;
    QString myname="friday";
    BELCompany *company =new BELCompany;
    company->setName("kiran");

    QQmlApplicationEngine engine;
    QQmlContext *cnt=engine.rootContext();
    cnt->setContextProperty("a",a);
    cnt->setContextProperty("myname",myname);
    cnt->setContextProperty("belComp",company);

    qDebug()<<"Address="<<company<<endl;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
