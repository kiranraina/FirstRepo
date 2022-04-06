#include "MySongListModel.h"

MySongListModel::MySongListModel(QObject *parent) : QObject(parent)
{
  qDebug()<<"MySongListModel constructor called"<<endl;
  this->init();
}

void MySongListModel::init()
{
    qDebug()<<"MySongListModel init called"<<endl;

    m_movielist=new QList<QString>;
    for(int i=1;i<=100;i++){
        m_movielist->push_back("kiran"+QString::number(i));
    }

    it=m_movielist->begin();
    t->setInterval(5000);
    QObject::connect(t,&QTimer::timeout,this,&MySongListModel::recivemovies);
    t->start();

}

void MySongListModel::recivemovies()
{
    qDebug()<<"MySongListModel recivemovies called"<<endl;
    qDebug()<<"MySongListModel list iterator  called"<<*it<<endl;

        emit sendMovies(*it);
    if(it==m_movielist->end())
    {
        t->stop();
    }
        it++;



}
