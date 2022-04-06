#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QColor>
#include <QQmlContext>
#include <login.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    int width=420;
    int height =480;
    QString company("Pthinks");
    QColor col(Qt::blue);

    Login *login=new Login;

    QQmlApplicationEngine engine;
    QQmlContext* context = engine.rootContext();
    context->setContextProperty("_width",width);
    context->setContextProperty("_height",height);
    context->setContextProperty("_color",col);
    context->setContextProperty("dataFromcpp",company);
    context->setContextProperty("auth",login);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
