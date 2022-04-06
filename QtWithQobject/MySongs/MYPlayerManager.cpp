#include "MYPlayerManager.h"

MYPlayerManager::MYPlayerManager(QObject *parent) : QObject(parent)
{
   qDebug()<<"MYPlayerManager constructor called"<<endl;
   this->init();
}

void MYPlayerManager::init()
{
    qDebug()<<"MYPlayerManager init called"<<endl;
    m_model=new MySongListModel;
    m_player=new MyPlayer;
    connect(m_model,&MySongListModel::SendSongs,m_player,&MyPlayer::Recivedsongs);
}
