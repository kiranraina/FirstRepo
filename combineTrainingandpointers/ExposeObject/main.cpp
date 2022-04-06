#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <bel_login.h>
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    BEL_Login *log = new BEL_Login;
    log->setProperty("sum","40");
    log->setUser("hello");

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("auth",log);
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
