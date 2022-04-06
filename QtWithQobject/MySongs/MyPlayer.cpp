#include "MyPlayer.h"

MyPlayer::MyPlayer(QObject *parent) : QObject(parent)
{
    qDebug()<<"Myplayer constructor called"<<endl;
}

void MyPlayer::init()
{
    qDebug()<<"Myplayer init called"<<endl;
}

void MyPlayer::Recivedsongs(QString song)
{
    qDebug()<<"Myplayer Recivedsongs called"<<song<<endl;
}
