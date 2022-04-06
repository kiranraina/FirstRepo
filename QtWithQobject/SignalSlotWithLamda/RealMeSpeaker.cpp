#include "RealMeSpeaker.h"
#include<QTimer>

RealMeSpeaker::RealMeSpeaker(QObject *parent) : QObject(parent)
{
    qDebug()<<"RealMeSpeaker constructor called"<<endl;
    auto f1=[](){
        qDebug()<<"go to heaven123"<<endl;
    };

    connect(this,&RealMeSpeaker::startPlaying,
            this,[](){
        qDebug()<<"constructor self lamda"<<endl;
    });
    QTimer *t=new QTimer;
    t->setInterval(5000);
    connect(t,&QTimer::timeout,this,[t](){
        qDebug()<<"timeout called"<<endl;
        t->stop();
    });
    t->start();
}
RealMeSpeaker::~RealMeSpeaker()
{
    qDebug()<<"RealMeSpeaker Destructor called"<<endl;
}

void RealMeSpeaker::startSpeaker(int x){
    qDebug()<<"RealMeSpeaker startSpeaker called"<<endl;
    emit startPlaying();
    //     emit startPlaying(100);
    emit startP(2000);
}
