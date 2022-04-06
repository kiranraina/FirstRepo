#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <bel_login.h>
#include <QQmlContext>
#include "Singleinstance.h"

QObject*BEL_Single_Producer(QQmlEngine *eng,QJSEngine *jsEngine){
    qDebug()<<Q_FUNC_INFO<<endl;
    SingleInstance *instance=new SingleInstance;
    instance->setFontColor(Qt::yellow);
    return instance;
}

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

   qmlRegisterType<BEL_Login>("BELComps",1,0,"BELUser");
   qmlRegisterUncreatableType<User>("BELComps",1,0,"BUser","Don't create this");
   qmlRegisterSingletonType<SingleInstance>("BELComps",1,0,"SInstance",BEL_Single_Producer);

    QQmlApplicationEngine engine;

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
