#include "MyPlayer.h"

MyPlayer::MyPlayer(QObject *parent) : QObject(parent)
{
    qDebug()<<"Myplayer constructor called"<<endl;
}

void MyPlayer::init()
{
    qDebug()<<"Myplayer init called"<<endl;
}

void MyPlayer::recievemovies(QString movie)
{
    qDebug()<<"Myplayer recievemovies called"<<movie<<endl;
}
