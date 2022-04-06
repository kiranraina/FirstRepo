#ifndef MYPLAYER_H
#define MYPLAYER_H
#include"QDebug"

#include <QObject>

class MyPlayer : public QObject
{
    Q_OBJECT
public:
    explicit MyPlayer(QObject *parent = 0);
    void init();

signals:

public slots:
   void  Recivedsongs(QString);
};

#endif // MYPLAYER_H
