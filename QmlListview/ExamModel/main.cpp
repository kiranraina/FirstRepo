#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QuestionModel.h>
#include<QQmlContext>
#include<Question.h>
#include<MyExamModel.h>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qmlRegisterType<Question>("MyQuestion",1,0,"Questions");
     qmlRegisterType<QuestionModel>("MyQuestionModel",2,0,"MyQuestions");
    QQmlApplicationEngine engine;
     engine.rootContext()->setContextProperty("sub",new MyExamModel);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
