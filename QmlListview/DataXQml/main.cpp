#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<Authentication.h>
#include<DisplayManager.h>
#include<Sensor.h>
#include<QQmlContext>
#include<QObject>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    Authentication *auth= new Authentication;

//    auth->setProperty("LoginStatus","10");
//    auth->setProperty("user","kiran");
//    auth->setProperty("pass","kiran10");

//    qDebug()<<Q_FUNC_INFO<<auth->property("user");
//    qDebug()<<Q_FUNC_INFO<<auth->property("pass");
    DisplayManager *mgr= new DisplayManager;
//    QObject::connect(auth,&Authentication::success,mgr,&DisplayManager::loginSucces);
//    QObject::connect(auth,&Authentication::fail,mgr,&DisplayManager::loginFial);
    QObject::connect(auth,SIGNAL(success()),mgr,SLOT(loginSucces()));
     QObject::connect(auth,SIGNAL(fail()),mgr,SLOT(loginFail()));
    int a=10;
    Sensor *sen=new Sensor;
    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("myauth",auth);
    engine.rootContext()->setContextProperty("valu",a);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    auth->verify("kiran","kiran@123");

    qDebug()<<Q_FUNC_INFO<<auth->property("LoginStatus");

    return app.exec();
}
