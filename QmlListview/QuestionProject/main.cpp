#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QuestionModel.h>
#include<QQmlContext>
#include<Question.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<Question>("MyQuestion",1,0,"Questions");
    QQmlApplicationEngine engine;
     engine.rootContext()->setContextProperty("QModel",new QuestionModel);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
