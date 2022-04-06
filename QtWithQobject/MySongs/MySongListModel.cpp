#include "MySongListModel.h"

MySongListModel::MySongListModel(QObject *parent) : QObject(parent)
{
  qDebug()<<"MySongListModel constructor called"<<endl;
  this->init();
}

void MySongListModel::init()
{
    qDebug()<<"MySongListModel init called"<<endl;

    m_songlist=new QList<QString>;
    for(int i=1;i<=100;i++){
        m_songlist->push_back("kiran"+QString::number(i));
    }

    it=m_songlist->begin();
    t->setInterval(5000);
   connect(t,&QTimer::timeout,this,&MySongListModel::Recivesongs);
    t->start();

}

void MySongListModel::Recivesongs()
{
    qDebug()<<"MySongListModel Recivesongs called"<<endl;
    qDebug()<<"MySongListModel list iterator  called"<<*it<<endl;

        emit SendSongs(*it);
    if(it==m_songlist->end())
    {
        t->stop();
    }
        it++;



}
