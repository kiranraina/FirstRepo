#include "MyWidget.h"
#include <QApplication>
#include<QDebug>
#include"RealMeSpeaker.h"
#include"iostream"
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    RealMeSpeaker *rp=new RealMeSpeaker;
    auto f=[](){
        cout<<"go to heaven"<<endl;
    };
    auto f1=[](int x){
        cout<<"go to heaven"<<x<<endl;
    };
    QObject::connect(rp,&RealMeSpeaker::startPlaying,f);

    QObject::connect(rp,&RealMeSpeaker::startP,f1);

    rp->startSpeaker(10);

    return a.exec();
}
