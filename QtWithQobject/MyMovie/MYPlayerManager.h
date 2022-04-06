#ifndef MYPLAYERMANAGER_H
#define MYPLAYERMANAGER_H
#include"QDebug"
#include"MyPlayer.h"
#include"MySongListModel.h"
#include <QObject>

class MYPlayerManager : public QObject
{
    Q_OBJECT
public:
    explicit MYPlayerManager(QObject *parent = 0);
   void init();
private:
   MySongListModel *m_model;
   MyPlayer *m_player;
signals:

public slots:

};

#endif // MYPLAYERMANAGER_H
